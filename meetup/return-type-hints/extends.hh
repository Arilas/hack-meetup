<?hh //strict
/**
 * This code will be worked in HACK without Fatal Error
 *
 */
namespace HH;
interface Extend {}
interface ExtendManager {
	public function bind():Extend;
}

class ExtendImpl implements Extend {}

class ExtendManagerImpl implements ExtendManager {
	public function bind():ExtendImpl {
		return new ExtendImpl();
	}
}