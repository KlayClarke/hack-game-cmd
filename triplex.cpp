#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are attempting to break out of a level " << Difficulty;
    std::cout << " political prison and expose secrets. You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    
    PrintIntroduction(Difficulty);

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
        std::cout << "\nYou\'ve cracked the code!";
        return true;
    }

    else
    {
        std::cout << "\nYou failed miserably. Try again!\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    int const MaxLevel = 5;

    // Loop game until all levels are completed - difficulty increases after each level
    while (LevelDifficulty <= MaxLevel) 
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            // Increase level of difficulty
            ++LevelDifficulty;
        }
    }

    std::cout << "\nCongratulations, you\'ve escaped the prison.";

    return 0;
}