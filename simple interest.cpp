#include <iostream>
using namespace std;
int main() {
    double principal, interest;
    int years;
    char seniorCitizen;
    cout << "Enter principal amount, number of years, and if senior citizen (y/n): ";
    cin >> principal >> years >> seniorCitizen;
    interest = principal * years * (seniorCitizen == 'y' || seniorCitizen == 'Y' ? 0.12 : 0.10);
    cout << "The simple interest is: " << interest << endl;
    return 0;
}
