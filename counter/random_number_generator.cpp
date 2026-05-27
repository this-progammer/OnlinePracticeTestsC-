// CPRAC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//random number generator

#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{
	srand(time(0)); // timer, needed because random number are based on timing without it you will get the same number for every second

	int _min = 0; // MINIMUM
	int _max = RAND_MAX; // HIGHEST

	int _mn_solv = std::rand() + _min; // solve
	int _mx_solv = std::rand() + _max; // solve

	// if you take a min and max, then divide by a rand() with remainder / by 2, you will get a random number

	std::cout << _mn_solv + _mx_solv % std::rand() / 2;


	return 0;
}
