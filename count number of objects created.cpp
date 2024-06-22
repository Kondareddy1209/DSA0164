#include <iostream>
using namespace std;
class ObjectCounter {
    static int count;
public:
    ObjectCounter() { cout << "Object created. Total: " << ++count << endl; }
    ~ObjectCounter() { cout << "Object destroyed. Total: " << --count << endl; }
    static int getCount() { return count; }
};
int ObjectCounter::count = 0;
int main() {
    int numObjects;
    cout << "Enter the number of objects to create: ";
    cin >> numObjects;
    cout << "Initial count: " << ObjectCounter::getCount() << endl;
    ObjectCounter* objects = new ObjectCounter[numObjects];
    cout << "Final count: " << ObjectCounter::getCount() << endl;
    delete[] objects;
    return 0;
}
