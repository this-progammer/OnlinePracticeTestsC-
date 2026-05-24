// reverse word
#include <iostream>
#include <string>


int main()
{
    std::string T;
    std::cin >> T;
     for( auto i = T.begin(); i != T.end(); i++ ) {
         std::reverse( T.begin(), T.end() );
         std::cout << T << "\n";
     }
    return 0;
}
