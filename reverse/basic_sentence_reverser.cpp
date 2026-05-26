// CPRAC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// basic sentence reverser

#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{

	std::vector<std::string>_string;
	std::string _ustr; // user string

	for (auto i = _string.size(); i <= sizeof(1); ++i) {
		std::cin >> _ustr; // input
		std::reverse(_ustr.begin(), _ustr.end()); // reverse
		std::cout << _ustr << "\t"; // output
			while (i > 1) {
				--i;
			}
	}

	return 0;
}
