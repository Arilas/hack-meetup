<?hh //decl
/**
 * This code will be worked in HACK without Fatal Error
 * 
 */
namespace HH;

interface ForNullable {}

interface ForNullableManager {
	public function bind():?ForNullable;
}

class ForNullableImpl implements ForNullable{}

class ForNullableManagerImpl implements ForNullableManager {
	public function bind():?ForNullable {
		return null;
	}
}

$manager = new ForNullableManagerImpl();
var_dump($manager->bind());