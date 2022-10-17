#include <iostream>
using namespace std;

// write a function to find the length of a string 

int main() {

    string str;
    cout << "Enter anything : ";
    getline(cin, str);

    int count = 0;

    for(int i = 0; i < str[i]; i++) {
        count++;
    }

    cout << "Length is : " << count << endl;
}