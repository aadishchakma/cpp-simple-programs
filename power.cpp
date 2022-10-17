#include <iostream>
using namespace std;

int main() {

    // compute the power a given number to a given power 
    int power;
    float base, result = 1;
    cout << "Enter two numbers (3 6) : ";
    cin >> base >> power;

    while (power != 0)
    {
        result = result * base; // result *= base; 
        power--;
    }

    cout << "result : " << result << endl; 
    
    return 0;
}