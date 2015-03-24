<?php
/**
 * This code will throw an Fatal Error:
 * Fatal error: Declaration of ABManager::bind() must be compatible with AManager::bind(): A in *** line 22
 */
namespace PHP;

interface A {}

interface B {}

interface AManager {
	public function bind():A;
}

interface BManager {
	public function bind():B;
}

class AB implements A,B {}

class ABManager implements AManager, BManager {
	public function bind():AB {
		return new AB();
	}
}