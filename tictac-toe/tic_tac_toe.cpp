// CPRAC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//*not finished yet
//tic tack toe

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <map>

static void checkString(std::string& _string) {
	if (_string.empty()) {
		std::cout << "board is empty or string type failed\n";
	}

	if (_string.size() == sizeof(_string) +(!1)) {
		std::cout << "string out of range\n";
	}
}

static void addString(std::string& _t_string) {
	std::string _nextToken("\n");
	checkString( _t_string );
	_t_string.insert(sizeof(_t_string), _nextToken);
}

static void addStringIndex(std::string& _strobj, std::string& _string_, int n) {
	// check strings
	checkString( _strobj );
	checkString( _string_ );
	// now check number
	if (n < 0 || n > 10 ) {
		std::cout << "exceeded position on board, whomp whomp\n";
	}
	// sorting the map
	std::array<std::string, 30> table = {_strobj};
	// iterate table
	for ( auto i = table.begin(); i != table.end(); ++i ) {
		auto _n = table.at( n ); // get num
		if (_string_.find(_string_, n)) { // check for table in number
			_string_.reserve( sizeof( i += ( sizeof( n ) ) ) ); // reserver sizes of ( i ) and ( n )
			_n += _string_.length(); // at table set map size length so string isnt out of range
			std::cout << "***number indentation found in table at*** ->\t" << __builtin_addressof( n ) << "\n";
		}
		_n.insert( n, _string_ );
	}
}

static void stringInput(std::string& _iobj, std::string& _v, int n) {
	auto _vv = _v;
	std::cin >> _vv >> n;
	addStringIndex(_iobj, _vv, n);
	std::cout << _iobj << _vv << n;
}

int main()
{
	int pos = 0;

	std::string board[]={
		"[]""|""[]\n"
		"|""[]""|\n"
		"[]""|""[]\n"
	};

	//stringInput(board[pos], _i, pos);

	stringInput(board[pos], board[pos], pos);

	return 0;
}
