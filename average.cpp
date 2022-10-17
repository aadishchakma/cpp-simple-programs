#include <iostream>
using namespace std;

int main() {

    // find average of numbers using arrays  
    int i, count, sum, inputArray[500];
    float average;

    cout << "Enter number of elements : ";
    cin >> count;

    cout << "Enter " << count << " elements : ";
    // read "count" elements from user 
    for(i = 0; i < count; i++) {
        cin >> inputArray[i];
    }

    sum = 0;

    // find sum of all array elements 
    for(i = 0; i < count; i++) {
        sum += inputArray[i];
    }

    average = (float) sum / count;
    cout << "Average = " << average << endl;

    return 0;
}