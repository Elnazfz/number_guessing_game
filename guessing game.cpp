#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to Number Guessing Game!\n";
    cout << "Guess a number between 1 and 100: ";

    do {
        cin >> guess;
        attempts++;

        if (guess > numberToGuess) {
            cout << "Too high! Try again: ";
        }
        else if (guess < numberToGuess) {
            cout << "Too low! Try again: ";
        }
        else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
        }
    } while (guess != numberToGuess);

    return 0;
}