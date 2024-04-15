<?php

class OpenIDConnectClientDonstu extends OpenIDConnectClientBase
{
    const HOST = 'https://lk.donstu.ru';

    public function getEndpoints()
    {
        return [
            //'authorization' => self::HOST . '/api/auth/oauth/redirect',
            'authorization' => self::HOST . '/WebApp/#/Authorize',
            'token' => self::HOST . '/api/auth/OAuth/Token',
            'userinfo' => self::HOST . '/api/auth/oauth/userinfo',
        ];
    }

    public function authorize($scope = 'openid email')
    {
        $redirect_uri = OPENID_CONNECT_REDIRECT_PATH_BASE . '/' . $this->name;
        $url_options = [
            'query' => [
                'client_id' => $this->getSetting('client_id'),
                'redirect_uri' => url($redirect_uri, [
                    'absolute' => true,
                    'language' => LANGUAGE_NONE,
                ]),
                'state' => openid_connect_create_state_token(),
            ],
        ];
        $endpoints = $this->getEndpoints();
        // Clear $_GET['destination'] because we need to override it.
        unset($_GET['destination']);
//        drupal_goto($endpoints['authorization'], $url_options);
        $path = $endpoints['authorization'] . '?' . drupal_http_build_query($url_options['query']);
        header('Location: ' . $path, true, 302);
        drupal_exit($path);
    }

    public function retrieveTokens($authorization_code)
    {
        // Exchange `code` for access token and ID token.
        $redirect_uri = OPENID_CONNECT_REDIRECT_PATH_BASE . '/' . $this->name;
        $data = [
            'code' => $authorization_code,
            'client_id' => $this->getSetting('client_id'),
            'client_secret' => $this->getSetting('client_secret'),
            'redirect_uri' => url($redirect_uri, [
                'absolute' => true,
                'language' => LANGUAGE_NONE,
            ]),
            'grant_type' => 'authorization_code',
        ];
        $request_options = [
            'data' => drupal_http_build_query($data),
            'timeout' => 15,
            'headers' => ['Content-Type' => 'application/x-www-form-urlencoded'],
        ];
        $endpoints = $this->getEndpoints();
        $response = drupal_http_request($endpoints['token'], $request_options);
        if (!isset($response->error) && $response->code === '200') {
            $response_data = json_decode($response->data, true);

            if (isset($response_data['state']) && $response_data['state'] === -2) {
                openid_connect_log_request_error(__FUNCTION__, $this->name, $response);
                return false;
            }

            $tokens = [
                'id_token' => '',
                'access_token' => $response_data['access_token'],
            ];
            if (array_key_exists('expires_in', $response_data)) {
                $tokens['expire'] = REQUEST_TIME + $response_data['expires_in'];
            }
            if (array_key_exists('refresh_token', $response_data)) {
                $tokens['refresh_token'] = $response_data['refresh_token'];
            }

            return $tokens;
        } else {
            openid_connect_log_request_error(__FUNCTION__, $this->name, $response);

            return false;
        }
    }

    public function retrieveUserInfo($access_token)
    {
        $userinfo = parent::retrieveUserInfo($access_token);
        $userinfo['sub'] = $userinfo['email'];

        return $userinfo;
    }

    public function decodeIdToken($id_token)
    {
        return [];
    }
}
