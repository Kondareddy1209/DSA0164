#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, num, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the numbers: ";
    do {
        cin >> num;
        sum += num;
        count++;
    } while (count < n);
    cout << "The sum of the " << n << " numbers is: " << sum << endl;
    return 0;
}
