#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int* ptr1 = &x;

    cout << "X: " << x << endl;
    cout << "Adress x: " << &x << endl;
    cout << "ptr: " << ptr1 << endl;
    cout << "*ptr: " << *ptr1 << endl;

    cout << "\n\n";

    int arr[5] = { 1, 2, 3, 4, 5 };
    int* ptr2 = arr;

    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr2 + i) << " ";
    }

    return 0;
}
