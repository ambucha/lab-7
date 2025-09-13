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

    // Set revArr to the reversed array
    string* revArr = reverseArray(arr, SIZE);

    // Output the two arrays
    cout << "Original array: ";
    displayArray(arr, SIZE);
    
    cout << endl << endl << "Reversed array: ";
    displayArray(revArr, SIZE);

    // Delete arrays
    delete[] arr;
    delete[] revArr;

    return 0;
}

string* reverseArray(const string* arr, int x){
    // Create a new array to be the reverse array
    string* revArr = new string[x];

    // Create a for loop going backwards on the reverse array and forwards on the original
    for(int i = 0; i < x; i++){
        *(revArr + i) = *(arr + (x - 1 - i)); // had done it in the wrong order before lpus had a +1 instead of a -1
    }
    return revArr;
}

void displayArray(const string* arr, int x){
    // Run a loop that displays each of the array elements using pointer notation
    for(int i = 0; i < x; i++){
        cout << *(arr + i) << " ";
    }
}