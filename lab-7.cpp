// COMSC-210 | Lab 7 | Andrei Buchatskiy
// IDE used : Visual Studio Code

#include <iostream>
#include <string>
using namespace std;

// reverseArray() reverses the array of strings
// arguments: dynamic string array, size of array
// return: pointer to new array
string* reverseArray(const string*, int);

// displayArray() displays the string array recieved
// arguments: dynamic string array, size of array
// return: nothing
void displayArray(const string*, int);

int main(){
    // create const for array size
    const int SIZE = 5;

    // Create dynamic array
    string* arr = new string[SIZE]{
        "Andrei", "Carol", "Guilherme", "Fernanda", "Catarina"
    };

}

