#include <iostream>
using namespace std;



int main() {
    int age;
    cout<<"enter the age :\n";
    cin>>age;
    
    if (age >= 18) {
        cout << "The person is eligible to vote." << endl;
    } else {
        int yearsLeft = 18 - age;
        cout << "The person is not eligible to vote." << endl;
        cout << "Years left to be eligible: " << yearsLeft << endl;
    }
    
    return 0;
}