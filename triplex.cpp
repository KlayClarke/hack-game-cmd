#include <iostream>

int main()
{
  std::cout << "You are attempting to break out of political prison and expose secrets.";
  std::cout << std::endl;
  std::cout << "You need to enter the correct codes to continue...";

  int a = 4;
  int b = 8;
  int c = 12;

  a = 7;

  int sum = a + b + c;
  int product = a * b * c;

  std::cout << std::endl;
  std::cout << sum << std::endl;
  std::cout << product;

  return 0;
}
