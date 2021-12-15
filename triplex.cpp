#include <iostream>

void PrintIntroduction()
{
    std::cout << "\n\nYou are attempting to break out of political prison and expose secrets.\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

void PlayGame()
{
    
    PrintIntroduction();

    const int CodeA = 2;
    const int CodeB = 4;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to terminal
    std::cout << "* There are three numbers in the code";
    std::cout << "\n* The codes add up to: " << CodeSum;
    std::cout << "\n* The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "\nYou entered: " << GuessA << GuessB << GuessC;
    std::cout << "\nYour guesses add up to: " << GuessSum;
    std::cout << "\nYour guesses multiply to give: " << GuessProduct;

    // Check if player guess is correct 
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!! Congratulations!";
    }

    else
    {
        std::cout << "\nYou lose! I'm sorry!\n";
    }
}

int main()
{
    while (true)
    {
        PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}
