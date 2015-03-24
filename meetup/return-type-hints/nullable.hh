<?hh //strict

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