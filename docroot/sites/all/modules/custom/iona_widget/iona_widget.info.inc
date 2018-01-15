<?php

/**
 * @file
 * Provides Entity metadata integration.
 */

/**
 * Extends the default metadata controller for iona_widget entity.
 */
class IonaWidgetMetadataController extends EntityDefaultMetadataController {
  /**
   * Overwriting entityPropertyInfo().
   */
  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    // Widget ID.
    $properties['wid'] = array(
      'type' => 'integer',
      'label' => t('Widget ID'),
      'description' => t('Unique ID for an Iona widget record.'),
      'schema field' => 'wid',
    );
    // Widget Name.
    $properties['name'] = array(
      'type' => 'text',
      'label' => t('Widget Name'),
      'description' => t('The name of the widget.'),
      'schema field' => 'name',
    );
    // Widget Description.
    $properties['description'] = array(
      'type' => 'text',
      'label' => t('Widget Description'),
      'description' => t('The description of the widget.'),
      'schema field' => 'description',
    );
    return $info;
  }
}

/**
 * IonaWidget Views Controller class.
 */
class IonaWidgetViewsController extends EntityDefaultViewsController {
  /**
   * Edit or add extra fields to views_data().
   */
  public function views_data() {
    $data = parent::views_data();
    return $data;
  }
}
