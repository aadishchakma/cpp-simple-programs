#include <iostream>
using namespace std;

int main() {

    // write a program to swap two numbers 
    int a = 10;
    int b = 30;

    cout << "Before swap :" << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap : " << a << " " << b << endl;

    return 0;
}