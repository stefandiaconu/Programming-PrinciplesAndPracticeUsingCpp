//
// Created by Stefan Diaconu on 06/06/2025.
//

#include "../../std_lib_facilities.h"

int main ()
{
    cout << "Please enter a number to be guessed: ";
    int guess_number;
    cin >> guess_number;
    cout << "Please enter a value between 1 and 100 to guess the number: ";
    int guess;

    while (cin >> guess) {
        if (guess < guess_number) {
            cout << "Your guess is smaller. Please try again: ";
        } else if (guess > guess_number) {
            cout << "Your guess is larger. Please try again: ";
        } else {
            cout << "Congratulations! You guessed the number " << guess << "!\n";
            break;
        }
    }

    return 0;
}