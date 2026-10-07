#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    if (username == "Nitish") {

        cout << "Enter Password: ";
        cin >> password;

        if (password == "1234") {
            cout << "Login Successful";
        }
        else {
            cout << "Login Unsuccessful - Wrong Password";
        }

    }
    else {
        cout << "Login Unsuccessful - Wrong Username";
    }

    return 0;
}