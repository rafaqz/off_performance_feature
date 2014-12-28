<?php
/**
 * @file
 * performance_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function performance_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer memcache storage'.
  $permissions['administer memcache storage'] = array(
    'name' => 'administer memcache storage',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'memcache_storage',
  );

  // Exported permission: 'boost flush pages'.
  $permissions['boost flush pages'] = array(
    'name' => 'boost flush pages',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'boost',
  );

  // Exported permission: 'view memcache storage debug'.
  $permissions['view memcache storage debug'] = array(
    'name' => 'view memcache storage debug',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'memcache_storage',
  );

  return $permissions;
}
