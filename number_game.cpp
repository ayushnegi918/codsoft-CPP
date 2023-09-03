#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr)); 
    int secretNumber = rand() % 100 + 1; 

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n\n";
    
    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number \n\n" << secretNumber << " in " << attempts << " attempts.\n\n";
        }
    } while (userGuess != secretNumber);

    return 0;
}