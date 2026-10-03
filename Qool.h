#include <iostream>





namespace Qool {

	bool CheckNumberInRange(int Number, int rangeLOW, int rangeHIGH) {
		// Checks for number range and returns a bool like in python ithink
		return (Number >= rangeLOW) && (Number <= rangeHIGH);
	}
}