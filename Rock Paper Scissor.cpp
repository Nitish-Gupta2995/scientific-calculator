#include <iostream>
using namespace std;

int main() {
    int user, computer = 2;

    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;

    cout << "Enter your choice: ";
    cin >> user;

    cout << "Computer chose: " << computer << endl;

    if (user == computer)
        cout << "Draw";

    else if (user == 1 && computer == 2)
        cout << "Computer Wins";

    else if (user == 2 && computer == 3)
        cout << "Computer Wins";

    else if (user == 3 && computer == 1)
        cout << "Computer Wins";

    else
        cout << "You Win";

    return 0;
}

