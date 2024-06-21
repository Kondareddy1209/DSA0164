#include <iostream>
using namespace std;
int main() {
    int n, number, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 0;
    cout << "Enter the numbers: ";
    while (i < n) {
        cin >> number;
        sum += number;
        i++;
    }
    cout << "The sum of the " << n << " numbers is: " << sum << endl;
    return 0;
}
