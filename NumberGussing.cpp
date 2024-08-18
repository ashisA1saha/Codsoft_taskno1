#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "Hello everyone welcome to the Number Guessing Game!\n";
    cout << "I have generated a random number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." <<endl ;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." <<endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }
    } while (userGuess != randomNumber);

}
