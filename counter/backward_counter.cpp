// backwards counter
#include <iostream>
#include <string>

int main()
{
  int i = 0;
  int n = 0;
  std::cin >> n;
  for( i = n; i <= n; i-- ) {
      --n;
      std::cout << i << std::endl;
      if( i == 0 ) {
          std::cout << "I at zero" << &i << "\n";
      }
  }
  return 0;
}
