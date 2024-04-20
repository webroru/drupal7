<?php

/**
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>

<!-- Button trigger modal -->
<button type="button" class="btn btn-primary" data-toggle="modal" data-target="#bibliographic-description">
  <?php print $label ?>
</button>

<!-- Modal -->
<div class="modal fade <?php print $classes; ?>"<?php print $attributes; ?> id="bibliographic-description" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
  <div class="modal-dialog" role="document">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
        <?php if (!$label_hidden): ?>
            <h4 class="modal-title field-label"<?php print $title_attributes; ?>><?php print $label ?></h4>
        <?php endif; ?>
      </div>
      <div class="modal-body">
        <div id="copyTarget" class="field-items"<?php print $content_attributes; ?>>
          <?php foreach ($items as $delta => $item): ?>
            <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
         <?php endforeach; ?>
        </div>
      </div>
      <div class="modal-footer">
        <button type="button" id="copyButton" class="btn btn-default" data-dismiss="modal">Копировать в буфер и закрыть</button>
      </div>
    </div>
  </div>
</div>

<script type="text/javascript">
document.getElementById('copyButton').addEventListener('click', function () {
    copyToClipboard(document.getElementById('copyTarget'));
});

function copyToClipboard(elem) {
    // create hidden text element, if it doesn't already exist
    var targetId = '_hiddenCopyText_';
    var isInput = elem.tagName === 'INPUT' || elem.tagName === 'TEXTAREA';
    var origSelectionStart, origSelectionEnd;
    if (isInput) {
        // can just use the original source element for the selection and copy
        target = elem;
        origSelectionStart = elem.selectionStart;
        origSelectionEnd = elem.selectionEnd;
    } else {
        // must use a temporary form element for the selection and copy
        target = document.getElementById(targetId);
        if (!target) {
            var target = document.createElement('textarea');
            target.style.position = 'absolute';
            target.style.left = '-9999px';
            target.style.top = '0';
            target.id = targetId;
            document.body.appendChild(target);
        }
        target.textContent = elem.textContent;
    }
    // select the content
    var currentFocus = document.activeElement;
    target.focus();
    target.setSelectionRange(0, target.value.length);
    
    // copy the selection
    var succeed;
    try {
        succeed = document.execCommand('copy');
    } catch(e) {
        succeed = false;
    }
    // restore original focus
    if (currentFocus && typeof currentFocus.focus === 'function') {
        currentFocus.focus();
    }
    
    if (isInput) {
        // restore prior selection
        elem.setSelectionRange(origSelectionStart, origSelectionEnd);
    } else {
        // clear temporary content
        target.textContent = '';
    }
    return succeed;
}
</script>