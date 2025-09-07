//* Caleb Scott 
#include <cstdlib>
#include "GuessingGame.h"

GuessingGame::GuessingGame(int maxTargetValue)
    : targetValue((rand() % maxTargetValue) + 1) // Initialize member var to rand number
{
    // Nothing here.
}

int GuessingGame::MakeGuess(int guessMade)
{
    if(guessMade < targetValue)
    {
        return -1;
    }
    else if(guessMade > targetValue)
    {
        return 1;
    }
    // guess == targetValue
    return 0;
}


