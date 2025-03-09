#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int number = 10;

    // Declare a pointer to the integer variable
    int* ptr = &number;

    // Display the initial values of the variable and the pointer
    cout << "Initial value of number: " << number << endl;
    cout << "Initial value of pointer (address): " << ptr << endl;
    cout << "Value at the pointer (dereferencing): " << *ptr << endl;

    // Modify the value of 'number' using the pointer
    *ptr = 20;

    // Display the modified values of the variable and the pointer
    cout << "Modified value of number: " << number << endl;
    cout << "Value at the pointer (dereferencing): " << *ptr << endl;

    return 0;
}

