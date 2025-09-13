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

    string* revArr = reverseArray(arr, SIZE);
}

string* reverseArray(const string* arr, int x){
    // Create a new array to be the reverse array
    string* revArr = new string[x];

    // Create a for loop going backwards on the reverse array and forwards on the original
    for(int i = 0; i < x; i++){
        *(revArr + (x + 1 - i)) = *(arr + i);
    }
    return revArr;
}

// no changes
