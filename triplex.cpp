#include <ctime>
#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are attempting to break out of a level " << Difficulty;
    std::cout << " political prison and expose secrets. You need to enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    
    PrintIntroduction(Difficulty);

    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
    const int CodeA = rand() % Difficulty + Difficulty;

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
        std::cout << "\n**You\'ve cracked the code!";
        return true;
    }

    else
    {
        std::cout << "\n**You failed miserably. Try again!\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); //Create random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxLevel = 5;

    while (LevelDifficulty <= MaxLevel) // Loop game until all levels are completed - difficulty increases after each level
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears errors
        std::cin.ignore(); // Ignores buffer

        if (bLevelComplete)
        {
            // Increase level of difficulty
            ++LevelDifficulty;
        }
    }

    std::cout << "\n****Congratulations, you\'ve escaped the prison.";

    return 0;
}