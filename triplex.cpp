#include <iostream>

int main()
{
  std::cout << "You are attempting to break out of political prison and expose secrets.";
  std::cout << std::endl;
  std::cout << "You need to enter the correct codes to continue..." << std::endl;

  const int CodeA = 2;
  const int CodeB = 4;
  const int CodeC = 5;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  std::cout << std::endl;
  std::cout << "* There are three numbers in the code" << std::endl;
  std::cout << "* The codes add up to: " << CodeSum << std::endl;
  std::cout << "* The codes multiply to give: " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;

  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;

  const int GuessSum = GuessA + GuessB + GuessC;
  const int GuessProduct = GuessA * GuessB * GuessC;

  std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;
  std::cout << "Your guesses add up to: " << GuessSum << std::endl;
  std::cout << "Your guesses multiply to give: " << GuessProduct << std::endl;

  return 0;
}
