#include <iostream>
#include <string>
using namespace std;
void printInfo(string name = "Unknown", int age = 0, string city = "Not specified") {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}
int main() {
    string name, city;
    int age;
    cout << "Enter name: ";
    getline(cin, name); 
    cout << "Enter city: ";
    getline(cin, city);
     cout << "Enter age: ";
    cin >> age;
    cin.ignore();
    cout << "\nPrinting entered information:\n";
    printInfo(name, age, city);
    cout << "\nPrinting with default arguments:\n";
    printInfo();
    return 0;
}