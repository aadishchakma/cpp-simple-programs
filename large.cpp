#include <iostream>
using namespace std;

int main() {

    // find the largest number among three numbers 
    double a, b, c;

    cout << "Enter three numbers (ex: 2 5 8) : ";
    cin >> a >> b >> c;

    if(a >= b && a >= c) {
        cout << "Largest number : " << a << endl;
    } else if(b >= a && b >= c) {
        cout << "Largest number : " << b << endl;
    } else if(c >= a && c >= b) {
        cout << "Largest number : " << c << endl;
    } else {
        cout << "There is no largest number." << endl;
    }

    return 0;
}