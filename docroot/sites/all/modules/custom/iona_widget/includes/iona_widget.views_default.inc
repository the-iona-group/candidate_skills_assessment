<?php

/**
* Implements hook_views_default_views()
*/

function iona_widget_views_default_views(){
    // Export of view from the site
    $view = new view();
    $view->name = 'widget_list';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'iona_widget';
    $view->human_name = 'Widget List';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Widget List';
    $handler->display->display_options['use_more'] = TRUE;
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'view widget list';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'description' => 'description',
    'date_available' => 'date_available',
    );
    $handler->display->display_options['style_options']['default'] = '-1';
    $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    ),
    'description' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    ),
    'date_available' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    ),
    );
    /* Field: Iona Widget: Widget ID */
    $handler->display->display_options['fields']['wid']['id'] = 'wid';
    $handler->display->display_options['fields']['wid']['table'] = 'iona_widget';
    $handler->display->display_options['fields']['wid']['field'] = 'wid';
    $handler->display->display_options['fields']['wid']['label'] = '';
    $handler->display->display_options['fields']['wid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['wid']['element_label_colon'] = FALSE;
    /* Field: Iona Widget: Widget Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'iona_widget';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    /* Field: Iona Widget: Widget Description */
    $handler->display->display_options['fields']['description']['id'] = 'description';
    $handler->display->display_options['fields']['description']['table'] = 'iona_widget';
    $handler->display->display_options['fields']['description']['field'] = 'description';
    /* Field: Iona Widget: Date Available */
    $handler->display->display_options['fields']['date_available']['id'] = 'date_available';
    $handler->display->display_options['fields']['date_available']['table'] = 'iona_widget';
    $handler->display->display_options['fields']['date_available']['field'] = 'date_available';
    /* Field: Global: Custom text */
    $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['table'] = 'views';
    $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['label'] = 'View Widget';
    $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Widget';
    $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['nothing']['alter']['path'] = '/iona-widget/[wid]';

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'widget-list';
    $handler->display->display_options['menu']['type'] = 'normal';
    $handler->display->display_options['menu']['title'] = 'Widget List';
    $handler->display->display_options['menu']['weight'] = '0';
    $handler->display->display_options['menu']['name'] = 'menu-widgets';
    $handler->display->display_options['menu']['context'] = 0;
    $handler->display->display_options['menu']['context_only_inline'] = 0;


    // Add it to the views array
        $views[$view->name] = $view;

    // Return views
        return $views;
}
