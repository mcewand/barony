<?php
/**
 * @file
 * barony_core.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function barony_core_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: barony_wysiwyg
  $profiles['barony_wysiwyg'] = array(
    'format' => 'barony_wysiwyg',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'PasteText' => 1,
          'RemoveFormat' => 1,
          'FontSize' => 1,
          'Styles' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'wyiswyg_theme_default',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'forcePasteAsPlainText' => 1,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 0,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 0,
      'version' => '4.6.1.580bcaf',
    ),
    'name' => 'formatbarony_wysiwyg',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
