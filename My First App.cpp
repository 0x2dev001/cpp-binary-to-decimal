#include <iostream>
#include <string>
#include "Qool.h"


void DecodeBianary(std::string Number) {
	int fullyBianaryInt = 0; // Make a var for the bianary as its being checked also outside of the scope of the for loop but inside the function so its resets every time 
	
	for (char c : Number) { // for each looop cus im fancy like that
		bool intCheck = Qool::CheckNumberInRange(c, 48 , 49); // lowest and highest number range baised on ascii table for 0 and 1 

		if (intCheck) {
			int numberchunk = c - '0';
			fullyBianaryInt = (fullyBianaryInt << 1) | numberchunk; // this is the whole brain W stack overflow btw so basicly we have a bianary digit right we move all that we have 1 to the left and add it adds 1 or 0  then we a "bitwise OR it compares bits and gives 1 if either bit is 1." - https://stackoverflow.com/questions/37127504/how-can-i-interpret-and-in-c?utm_source
		}
		else {
			std::cout << "You dumbass only numbers 0's and 1's this shits hard enough for me ";
		}
	}
	std::cout << fullyBianaryInt;	
}

int main() {
	// input is bianary and string and i have to out put it into decimal
	DecodeBianary("10011101");

}