#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0) {
        cout << "Array size should be positive." << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "The smallest element in the array is: " << smallest << endl;
    return 0;
}
