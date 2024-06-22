#include <iostream>
#include <string>
using namespace std;
bool isValidUsername(string username, string validName) {
    return username == validName;
}
int main() {
    string validUsername, inputUsername;   
    cout << "Enter the valid username: ";
    cin >> validUsername;
    cout << "Enter the username to check: ";
    cin >> inputUsername;
    if (isValidUsername(inputUsername, validUsername)) {
        cout << "The entered username is valid." << endl;
    } else {
        cout << "The entered username is not valid." << endl;
    }
    return 0;
}