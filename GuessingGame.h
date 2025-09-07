//* Caleb Scott 
#ifndef GUESS_H
#define GUESS_H

class GuessingGame
{
    private:
        int targetValue; // To hold the target guess value

    public:
        GuessingGame(int maxTargetValue); 
        int MakeGuess(int guessMade);
};

#endif
