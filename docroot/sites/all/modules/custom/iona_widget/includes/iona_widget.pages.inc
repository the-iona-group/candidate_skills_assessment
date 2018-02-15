<?php

/**
 * @file
 * File used for menu callbacks for the iona_widget.module.
 */

/**
 * Widget creation form.
 */
function iona_widget_form($form, &$form_state, $widget) {
  // Stores the widget object in form state to be used in the submit handler.
  $form_state['iona_widget'] = $widget;

  // Widget name.
  $form['name'] = array(
    '#title' => t('Widget name'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  // Widget description.
  $form['description'] = array(
    '#title' => t('Widget description'),
    '#type' => 'textarea',
  );

  // A date a widget will be available to the public.
  $form['date_available'] = array(
    '#title' => t('Date Available'),
    '#date_format' => 'm-d-Y',
    '#default_value' => REQUEST_TIME,
    '#type' => 'date_popup',
    '#required' => TRUE,
  );

  $form['actions'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('form-actions')),
    '#weight' => 400,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add widget'),
    '#submit' => array('iona_widget_form_submit'),
  );
  // return $form;
  return $form;
}

/**
 * Submit handler for iona_widget_form().
 */
function iona_widget_form_submit($form, &$form_state) {
  $widget = $form_state['iona_widget'];

  // Populates the widget entities properties from the form and form state.
  entity_form_submit_build_entity('iona_widget', $widget, $form, $form_state);
  $widget->save();
  drupal_set_message('A new widget has successfully been added.');
  $form_state['redirect'] = 'iona-widget/' . $widget->wid;
}

/**
 * Displays a simple view of the widget's properties.
 *
 * @param object $widget
 *   The widget object being viewed.
 *
 * @return string
 *   The HTML string of the view widget page.
 */
function iona_widget_view($widget) {
  $content = array();
  // Widget name.
  $content['name'] = array(
    '#type' => 'item',
    '#title' => t('Widget name'),
    '#markup' => $widget->name,
  );
  // Widget description.
  $content['description'] = array(
    '#type' => 'item',
    '#title' => t('Widget description'),
    '#markup' => $widget->description,
  );
  // A date a widget will be available to the public.
  $content['date_available'] = array(
    '#type' => 'item',
    '#title' => t('Date Available'),
    '#markup' => $widget->date_available,
  );
  return drupal_render($content);
}
