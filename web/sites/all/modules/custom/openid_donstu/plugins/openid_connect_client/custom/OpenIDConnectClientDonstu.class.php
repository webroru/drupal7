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

    public function retrieveUserInfo($access_token) {
        $userinfo = parent::retrieveUserInfo($access_token);
        $userinfo['sub'] = $userinfo['email'];

        return $userinfo;
    }
}
