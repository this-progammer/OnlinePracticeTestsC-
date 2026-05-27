// CPRAC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//random number generator

#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{
	int n = 0; // num
	std::cin >> n; // input
	// take the input and decrement it
	for (int i = n; i >= 0; --i) {
		// take ( i ) and output it, if n it will not work thats because i is whats decrementing
			std::cout << i << "\n";
			if ( i == 0 ) {
				std::cout << "i is equal to zero\n";
			}
		}
	return 0;
}
