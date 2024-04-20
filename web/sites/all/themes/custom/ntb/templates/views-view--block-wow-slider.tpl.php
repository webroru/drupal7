<div id="wowslider-container1">
  <div class="ws_images">
    <ul>
      <?php foreach ($view->result as $result): ?>
        <li>
          <?php print theme('image_style', array('path' => $result->field_field_image[0]['rendered']['#item']['uri'], 'title' => $result->node_title, 'style_name' => 'flexslider_full')); ?>
          <p data-url="<?php print(url($result->field_field_link[0]['raw']['value'])); ?>"><?php print(drupal_html_to_text($result->field_body[0]['rendered']['#markup'])); ?></p>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
    <div class="ws_bullets">
      <div>
        <?php foreach ($view->result as $result): ?>
          <a href="#" title="<?php print htmlspecialchars($result->node_title); ?>">
            <?php print theme('image_style', array('path' => $result->field_field_image[0]['rendered']['#item']['uri'], 'alt' => $result->node_title, 'style_name' => 'flexslider_thumbnail')); ?>
            <?php print htmlspecialchars($result->node_title); ?></a>
        <?php endforeach; ?>          
      </div>
    </div>
    <div class="ws_shadow"></div>
</div>

<?php drupal_add_js('sites/all/themes/ntb/js/wowslider.js', array('type' => 'file', 'scope' => 'footer')); ?>
<?php drupal_add_js('sites/all/themes/ntb/js/script.js', array('type' => 'file', 'scope' => 'footer')); ?>

<script type="text/javascript">
  ;(function ($){
    $(function (){
      $('.ws-title').on('click', function (){
        window.location = $(this).find('[data-url]').data('url');
      });
    });
  })(jQuery);
</script>

<style>
  .ws-title {
    cursor: pointer;
  }
</style>