<?php
/**
 * This code will throw an Fatal Error:
 * Fatal error: Return value of PHP\ForNullableManagerImpl::bind() must implement interface PHP\ForNullable, null returned in *** on line 17 in *** on line 17
 */
namespace PHP;

interface ForNullable {}

interface ForNullableManager {
	public function bind():ForNullable;
}

class ForNullableImpl implements ForNullable{}

class ForNullableManagerImpl implements ForNullableManager {
	public function bind():ForNullable {
		return null;
	}
}

$manager = new ForNullableManagerImpl();
var_dump($manager->bind());