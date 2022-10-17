#include <iostream>
using namespace std;

// write a program to find the GCD of two numbers 

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two numbers here : ";
    cin >> a >> b;

    int sum = gcd(a, b);

    cout << "The sum of gcd is = " << sum << endl;

    return 0;
}