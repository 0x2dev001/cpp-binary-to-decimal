#include <iostream>
#include <string>
#include "Qool.h"


/*
Author: 2dev
Hours spent: 4.3
Date: 10/3/26
*/




void DecodeBianary(std::string Number) {
	int fullyBianaryInt = 0; // Make a var for the bianary as its being checked also outside of the scope of the for loop but inside the function so its resets every time 
	for (char c : Number) { // for each looop cus im fancy like that
		bool intCheck = Qool::CheckNumberInRange(c, 48 , 49); // lowest and highest number range baised on ascii table for 0 and 1 
		if (intCheck) {
			int numberchunk = c - '0'; // converts to int
			fullyBianaryInt = (fullyBianaryInt << 1) | numberchunk; // this is the whole brain W stack overflow btw so basicly we have a bianary digit right we move all that we have 1 to the left and add it adds 1 or 0  then we a "bitwise OR it compares bits and gives 1 if either bit is 1." - https://stackoverflow.com/questions/37127504/how-can-i-interpret-and-in-c?utm_source
		}
		else {
			std::cout << "You dumbass only numbers 0's and 1's this shits hard enough for me ";
		}
	}
	std::cout << fullyBianaryInt << "\n";
}


std::string EncodeBianary(int Numb) {
		if (Numb == 0) {return "0";} // bug fix: b was compaired to a int not a char
		std::string Bits;// number out of scope for the bits

		while (Numb > 0) { // main transition loop does that till there is nothing left to devide
			Bits += std::to_string(Numb % 2); // dumbass math
			Numb /= 2;
		}
		std::reverse(Bits.begin(), Bits.end()); // reverses cus the calculation reverses it at the final itteration
		return Bits;
}




int main() {
	// input is bianary and string and i have to out put it into decimal
	std::string A = EncodeBianary(1827);
	std::cout << A << "\n";
	DecodeBianary(A);
	

}
