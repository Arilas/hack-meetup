<?hh //strict
/**
 * This code will be worked in HACK without Fatal Error
 * 
 */
namespace HH;

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