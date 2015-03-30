<?hh //strict

class ArrayMappers {
	public function withVector(Vector<int> $vector):void {

	}

	public function withArray(array<int> $array):void {

	}

	public function withMap(Map<string, string> $map):void {

	}
}

function main():void {
	$arrayMappers = new ArrayMappers();
	$arrayMappers->withVector(Vector {1,2,3});
	$arrayMappers->withVector(Vector {1,2,'3'});

	$arrayMappers->withArray(array(1,2,3));
	$arrayMappers->withArray(array(1,2,'3'));

	$arrayMappers->withMap(Map {"key" => "test"});
	$arrayMappers->withMap(Map {"key" => 1});
	$arrayMappers->withMap(Map {0 => "test"});
}