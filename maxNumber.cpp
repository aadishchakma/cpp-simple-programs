#include <iostream>
using namespace std;

// find the maximum number in an array of integers 
// define a maximum variable which will store the maximum in each iteration 

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    int max = 0;

    for(int i = 0; i < arr[i]; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max << endl;

    return 0;
}