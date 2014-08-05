<?php

/**
 * Implementation of hook_views_default_views().
 */
function listingsbystate_views_default_views() {
  $views = array();

  // Exported view: StateListing
  $view = new view;
  $view->name = 'StateListing';
  $view->description = 'Alphabetical List of States with Boondocking Locations';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'States With Boondocking Locations';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Boondocking Locations by State';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'country';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Below you\'ll find a listing of all of our boondocking locations by country and state. For more detailed search capabilities including the ability to filter based on rig size, etc, please see our <a href="/search-boondocking-by-location">search by location page</a>.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: country-shortcode */
  $handler->display->display_options['fields']['country_1']['id'] = 'country_1';
  $handler->display->display_options['fields']['country_1']['table'] = 'location';
  $handler->display->display_options['fields']['country_1']['field'] = 'country';
  $handler->display->display_options['fields']['country_1']['ui_name'] = 'country-shortcode';
  $handler->display->display_options['fields']['country_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['country_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['country_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['country_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['country_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['country_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['country_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['country_1']['style'] = 'code';
  /* Field: province-shortcode */
  $handler->display->display_options['fields']['province_1']['id'] = 'province_1';
  $handler->display->display_options['fields']['province_1']['table'] = 'location';
  $handler->display->display_options['fields']['province_1']['field'] = 'province';
  $handler->display->display_options['fields']['province_1']['ui_name'] = 'province-shortcode';
  $handler->display->display_options['fields']['province_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['province_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['province_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['province_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['province_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['province_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['province_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['province_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['province_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['province_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['province_1']['style'] = 'code';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['country']['alter']['text'] = '[country]:';
  $handler->display->display_options['fields']['country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['country']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['country']['hide_alter_empty'] = 1;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[province], [country]';
  $handler->display->display_options['fields']['province']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['province']['alter']['path'] = 'SearchByState/[country_1]/[province_1]';
  $handler->display->display_options['fields']['province']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['province']['alter']['external'] = 0;
  $handler->display->display_options['fields']['province']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['province']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['province']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['province']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['province']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['province']['alter']['html'] = 0;
  $handler->display->display_options['fields']['province']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['province']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['province']['empty'] = '<a href="/SearchByCountryWithoutStates/[country_1]">No State Availalbe</a>';
  $handler->display->display_options['fields']['province']['hide_empty'] = 1;
  $handler->display->display_options['fields']['province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['province']['hide_alter_empty'] = 0;
  /* Sort criterion: Location: Country */
  $handler->display->display_options['sorts']['country']['id'] = 'country';
  $handler->display->display_options['sorts']['country']['table'] = 'location';
  $handler->display->display_options['sorts']['country']['field'] = 'country';
  /* Sort criterion: Location: Province */
  $handler->display->display_options['sorts']['province']['id'] = 'province';
  $handler->display->display_options['sorts']['province']['table'] = 'location';
  $handler->display->display_options['sorts']['province']['field'] = 'province';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  /* Filter: Content: Do you have a boondocking location available on your property? (field_ba_bda_preference) - Allowed values */
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['id'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['table'] = 'node_data_field_ba_bda_preference';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['field'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['reduce_duplicates'] = 0;
  /* Filter: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'stateListing';
  $handler->display->display_options['menu']['title'] = 'Listings by State/Country';
  $handler->display->display_options['menu']['description'] = 'Listings by state and country';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  // Exported view: listings_by_country_no_states
  $view = new view;
  $view->name = 'listings_by_country_no_states';
  $view->description = 'Boondocking Listings by Country';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Boondocking Listings by Country';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '%1 Boondocking Locations';
  $handler->display->display_options['css_class'] = 'search-results';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Click on a marker to see the name of the member and link to their profile. Double click on an unmarked area to zoom in.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: Node: Content Profile */
  $handler->display->display_options['relationships']['content_profile_rel']['id'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['content_profile_rel']['field'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['required'] = 0;
  $handler->display->display_options['relationships']['content_profile_rel']['type'] = 'profile';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['city']['hide_alter_empty'] = 1;
  /* Field: Content: User Photo (field_user_photo) */
  $handler->display->display_options['fields']['field_user_photo_fid']['id'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['table'] = 'node_data_field_user_photo';
  $handler->display->display_options['fields']['field_user_photo_fid']['field'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['relationship'] = 'content_profile_rel';
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_user_photo_fid']['format'] = 'user_photo_small_tn_default';
  /* Sort criterion: Location: Latitude */
  $handler->display->display_options['sorts']['latitude']['id'] = 'latitude';
  $handler->display->display_options['sorts']['latitude']['table'] = 'location';
  $handler->display->display_options['sorts']['latitude']['field'] = 'latitude';
  /* Sort criterion: Location: Longitude */
  $handler->display->display_options['sorts']['longitude']['id'] = 'longitude';
  $handler->display->display_options['sorts']['longitude']['table'] = 'location';
  $handler->display->display_options['sorts']['longitude']['field'] = 'longitude';
  /* Argument: Location: Country */
  $handler->display->display_options['arguments']['country']['id'] = 'country';
  $handler->display->display_options['arguments']['country']['table'] = 'location';
  $handler->display->display_options['arguments']['country']['field'] = 'country';
  $handler->display->display_options['arguments']['country']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['country']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['country']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['country']['validate_fail'] = 'empty';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Filter: Content: Do you have a boondocking location available on your property? (field_ba_bda_preference) - Allowed values */
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['id'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['table'] = 'node_data_field_ba_bda_preference';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['field'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['reduce_duplicates'] = 0;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['rid_1']['reduce_duplicates'] = 0;
  /* Filter: Location: Province */
  $handler->display->display_options['filters']['province']['id'] = 'province';
  $handler->display->display_options['filters']['province']['table'] = 'location';
  $handler->display->display_options['filters']['province']['field'] = 'province';
  $handler->display->display_options['filters']['province']['value'] = 'NULL';

  /* Display: Search Listings Pane */
  $handler = $view->new_display('panel_pane', 'Search Listings Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Search Listings Page */
  $handler = $view->new_display('page', 'Search Listings Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>There are currently <?php print views_get_current_view()->total_rows ?> RV boondocking locations in %1. </p><p>Click on a marker to see the name of the member and link to their profile. Double click on an unmarked area to zoom in.</p>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  $handler->display->display_options['path'] = 'SearchByCountryWithoutStates';

  /* Display: Search Listings Map Attachment */
  $handler = $view->new_display('attachment', 'Search Listings Map Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap width=100%| height=600px]';
  $handler->display->display_options['style_options']['markertype'] = 'numbers';
  $handler->display->display_options['style_options']['latfield'] = 'name';
  $handler->display->display_options['style_options']['lonfield'] = 'name';
  $handler->display->display_options['style_options']['markerfield'] = 'name';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'name';
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['tooltipfield'] = 'name';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no locations in the area specified.';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['inherit_pager'] = 1;
  $handler->display->display_options['render_pager'] = 0;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
    'page_2' => 0,
  );

  $views[$view->name] = $view;

  // Exported view: listings_by_state
  $view = new view;
  $view->name = 'listings_by_state';
  $view->description = 'Boondocking Listings by State';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Boondocking Listings by State';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '%2 Boondocking Locations';
  $handler->display->display_options['css_class'] = 'search-results';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'Click on a marker to see the name of the member and link to their profile. Double click on an unmarked area to zoom in.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: Node: Content Profile */
  $handler->display->display_options['relationships']['content_profile_rel']['id'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['content_profile_rel']['field'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['required'] = 0;
  $handler->display->display_options['relationships']['content_profile_rel']['type'] = 'profile';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['city']['hide_alter_empty'] = 1;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['label'] = '';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['province']['alter']['text'] = '[city], [province]';
  $handler->display->display_options['fields']['province']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['province']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['province']['alter']['external'] = 0;
  $handler->display->display_options['fields']['province']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['province']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['province']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['province']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['province']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['province']['alter']['html'] = 0;
  $handler->display->display_options['fields']['province']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['province']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['province']['hide_empty'] = 0;
  $handler->display->display_options['fields']['province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['province']['hide_alter_empty'] = 1;
  /* Field: Content: User Photo (field_user_photo) */
  $handler->display->display_options['fields']['field_user_photo_fid']['id'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['table'] = 'node_data_field_user_photo';
  $handler->display->display_options['fields']['field_user_photo_fid']['field'] = 'field_user_photo_fid';
  $handler->display->display_options['fields']['field_user_photo_fid']['relationship'] = 'content_profile_rel';
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_user_photo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_user_photo_fid']['format'] = 'user_photo_small_tn_default';
  /* Sort criterion: Location: Latitude */
  $handler->display->display_options['sorts']['latitude']['id'] = 'latitude';
  $handler->display->display_options['sorts']['latitude']['table'] = 'location';
  $handler->display->display_options['sorts']['latitude']['field'] = 'latitude';
  /* Sort criterion: Location: Longitude */
  $handler->display->display_options['sorts']['longitude']['id'] = 'longitude';
  $handler->display->display_options['sorts']['longitude']['table'] = 'location';
  $handler->display->display_options['sorts']['longitude']['field'] = 'longitude';
  /* Argument: Location: Country */
  $handler->display->display_options['arguments']['country']['id'] = 'country';
  $handler->display->display_options['arguments']['country']['table'] = 'location';
  $handler->display->display_options['arguments']['country']['field'] = 'country';
  $handler->display->display_options['arguments']['country']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['country']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['country']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['country']['validate_fail'] = 'empty';
  /* Argument: Location: Province */
  $handler->display->display_options['arguments']['province']['id'] = 'province';
  $handler->display->display_options['arguments']['province']['table'] = 'location';
  $handler->display->display_options['arguments']['province']['field'] = 'province';
  $handler->display->display_options['arguments']['province']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['province']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['province']['default_argument_skip_url'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boondocking_available' => 'boondocking_available',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Filter: Content: Do you have a boondocking location available on your property? (field_ba_bda_preference) - Allowed values */
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['id'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['table'] = 'node_data_field_ba_bda_preference';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['field'] = 'field_ba_bda_preference_value_many_to_one';
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_ba_bda_preference_value_many_to_one']['reduce_duplicates'] = 0;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['rid_1']['reduce_duplicates'] = 0;

  /* Display: Search Listings Pane */
  $handler = $view->new_display('panel_pane', 'Search Listings Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Search Listings Page */
  $handler = $view->new_display('page', 'Search Listings Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>There are currently <?php print views_get_current_view()->total_rows ?> RV boondocking locations in %2. </p><p>Click on a marker to see the name of the member and link to their profile. Double click on an unmarked area to zoom in.</p>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  $handler->display->display_options['path'] = 'SearchByState';

  /* Display: Search Listings Map Attachment */
  $handler = $view->new_display('attachment', 'Search Listings Map Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap width=100%| height=600px]';
  $handler->display->display_options['style_options']['markertype'] = 'numbers';
  $handler->display->display_options['style_options']['latfield'] = 'name';
  $handler->display->display_options['style_options']['lonfield'] = 'name';
  $handler->display->display_options['style_options']['markerfield'] = 'name';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'name';
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'distance';
  $handler->display->display_options['style_options']['tooltipfield'] = 'name';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no locations in the state you specified.';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['inherit_pager'] = 1;
  $handler->display->display_options['render_pager'] = 0;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
    'page_2' => 0,
  );

  $views[$view->name] = $view;

  return $views;
}
