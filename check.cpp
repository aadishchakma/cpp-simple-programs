#include <iostream>
using namespace std;

int main() {
    // check if a number is even or odd 
    int x;
    cout << "Enter your number : ";
    cin >> x;

    if(x % 2 == 0) {
        cout << "This is a Even number." << endl;
    } else {
        cout << "This is a Odd number." << endl;
    }

    return 0;
}