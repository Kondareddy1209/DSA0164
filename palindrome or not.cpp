#include <iostream>
#include <algorithm>
using namespace std;
inline bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}
int main() {
    string input;
    char choice;
    do {
        cout << "Enter a string to check if it's a palindrome: ";
        cin >> input;    
        if (isPalindrome(input)) {
            cout << "The string is a palindrome." << endl;
        } else {
            cout << "The string is not a palindrome." << endl;
        }
        cout << "Do you want to check another string? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}
