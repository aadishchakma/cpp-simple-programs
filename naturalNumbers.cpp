#include <iostream>
using namespace std;

int main() {

    // find the sum of all the natural numbers from 1 to n 
    int n, sum = 0;

    cout << "Enter the number : ";
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        sum = sum + i;
    }

    // or you can use this line instead of the for loop 
    // sum = n * (n + 1 ) / 2; 

    cout << "Sum is : " << sum << endl;

    return 0;
}