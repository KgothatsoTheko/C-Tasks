//Task 4:Guessing Game

// Implement a number guessing game.
//  Generate a random number and prompt
//  the user to guess the number. Provide
//  hints such as "higher" or "lower" to help
//  the user narrow down the guess.
//  Continue until the user guesses the
//  correct number.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    // Get a different random number each time the program runs
srand(time(0));

// Generate a random number between 0 and 10
int randomNum = rand() % 11;
string done = "All done";
int guessNumber;

    cout << "Welcome to the Guessing Game!" << '\n';
    cout << "Hint: The number is between 0 and 10." << '\n';
    // Looping until number guessed is correct
    do {
        cout << "Guess the number: ";
        cin >> guessNumber;

        if (guessNumber < randomNum) {
            cout << "Too low! Try again." << '\n';
        } else if (guessNumber > randomNum) {
            cout << "Too high! Try again." << '\n';
        } else {
            cout << "You guessed the correct number!" << '\n' << "Game Over! Thank you for playing;)";
            cin >> done;
        }
    } while (guessNumber != randomNum);
    return 0;
}