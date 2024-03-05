#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int lowerBound = 1; // Lower bound of the range
    int upperBound = 100; // Upper bound of the range
    int numberToGuess; // The random number to be guessed by the player
    int guess; // Player's guess
    int attempts = 0; // Number of attempts made by the player

    // Seed the random number generator
    srand(time(0));

    // Generate a random number within the specified range
    numberToGuess = lowerBound + rand() % (upperBound - lowerBound + 1);

    cout << "Welcome to the Casino Number Guessing Game!" << endl;
    cout << "I have chosen a number between " << lowerBound << " and " << upperBound << "." << endl;

    // Main game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess == numberToGuess) {
            cout << "Congratulations! You've guessed the correct number (" << numberToGuess << ") in " << attempts << " attempts." << endl;
            break; // Exit the loop if the guess is correct
        } else if (guess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

        if (attempts >= 5) {
            cout << "Sorry, you've used all your attempts. The correct number was " << numberToGuess << "." << endl;
            break; // Exit the loop if the player has used all attempts
        }
    }

    return 0;
}
