<?php
/**
 * @file
 * general_settings_reservations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function general_settings_reservations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_advance_extended';
  $strongarm->value = '180';
  $export['room_reservations_advance_extended'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_advance_standard';
  $strongarm->value = '14';
  $export['room_reservations_advance_standard'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_before_after_hours';
  $strongarm->value = '3';
  $export['room_reservations_before_after_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_calendar_flipped';
  $strongarm->value = 0;
  $export['room_reservations_calendar_flipped'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_compressed_labels';
  $strongarm->value = 0;
  $export['room_reservations_compressed_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_end_early';
  $strongarm->value = 0;
  $export['room_reservations_end_early'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_hour_format';
  $strongarm->value = '1';
  $export['room_reservations_hour_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_max_length_extended';
  $strongarm->value = '120';
  $export['room_reservations_max_length_extended'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_max_length_standard';
  $strongarm->value = '120';
  $export['room_reservations_max_length_standard'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_picker_format';
  $strongarm->value = 'd/m/y';
  $export['room_reservations_picker_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_reservations_per_day';
  $strongarm->value = '1';
  $export['room_reservations_reservations_per_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_reservations_per_user';
  $strongarm->value = '4';
  $export['room_reservations_reservations_per_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'room_reservations_title';
  $strongarm->value = 'Room Reservations';
  $export['room_reservations_title'] = $strongarm;

  return $export;
}
