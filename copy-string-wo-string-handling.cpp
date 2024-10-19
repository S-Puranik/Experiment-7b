#include <iostream>
using namespace std;

int main(){

    int n1, n2;
    cout << "Copying one string into another w/o using string handling function:" << endl << endl;
    cout << "Enter the length of the first character array: ";
    cin >> n1;

    char array1[n1];
    cout << "Now enter the character array: " << endl;
    for(int i=0; i<n1; i++){
        cout << "Element " << i << ": ";
        cin >> array1[i];
        cout << endl;
    }

    cout << "Now enter the length of the second character array: ";
    cin >> n2;

    char array2[n2];
    cout << "Now enter the second character array: " << endl;
    for(int i=0; i<n2; i++){
        cout << "Element " << i << ": ";
        cin >> array2[i];
        cout << endl;
    }

    cout << "Now copying the second array into the first one: " << endl;
    for(int i=0; i<n1; i++){
        array1[i] = '\0';
    }

    // Declaring another array because i found out that you can't change
    // The size of the array once you declared it :(
    char array3[n2];
    for(int i=0; i<n2; i++){
        array3[i] = array2[i];
    }

    cout << "Printing the elements of both arrays:" << endl;
    cout << "Array 1 becomes: " << endl;
    for(int i=0; i<n2; i++){
        cout << array3[i];
    }
    cout << endl << "Array 2: " << endl;
    for(int i=0; i<n2; i++){
        cout << array2[i];
    }
    
    return 0;
}
