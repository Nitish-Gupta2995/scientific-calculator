#include <iostream>
using namespace std;

int main() {
    int number, guess;

    number = 7;

    cout << "===== Casino Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == number)
        cout << "Congratulations! You Win!";
    else
        cout << "Sorry! You Lose.";

    return 0;
}