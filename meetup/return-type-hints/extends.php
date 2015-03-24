<?php
/**
 * This code will throw an Fatal Error:
 * Fatal error: Declaration of PHP\ExtendManagerImpl::bind() must be compatible with PHP\ExtendManager::bind(): PHP\Extend in *** on line 14
 */
namespace PHP;
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