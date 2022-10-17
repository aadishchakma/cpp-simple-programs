#include <iostream>
using namespace std;

int main() {

    // write a program to check whether a number is prime or not 
    int a;
    cout << "Enter a number : ";
    cin >> a;

    int b = 2;
    // start from b as 1 can divide any number 
    bool prime = true;
    while(b != a) {
        if(a % b == 0) {
            prime = false;
            break;
        }
        b++;
    }

    if(prime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }

    return 0;
}