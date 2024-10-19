#include <iostream>
#include <cstring>
using namespace std;

/*
a)  To find length of a string -> strlen(s1)
b)  To compare two string for equality -> strcmp(s1, s2)
c)  To Copy one string to other -> strcpy(s1, s2)
d)  To concatenate two string -> strcat(s1, s2)
e)  To find reverse of a String
*/

int main(){
    // a) Finding the length of a string

    cout << "a) Finding the length of a string" << endl;
    cout << "Enter the string s1: ";
    char s1[1000];
    cin >> s1;
    int a = strlen(s1);

    cout << "The length of the string s1 is: " << a << endl;

    // b) Comparing s1 with string s2

    cout << endl << "b) Comparing s1 with string s2" << endl;

    cout << "Enter the string s2: ";
    char s2[1000];
    cin >> s2;
    int b = strcmp(s1, s2);
    if(b > 0){
        cout << "Length of s1 is bigger than s2" << endl;
    }
    else if(b == 0){
        cout << "Length of s1 is the same as s2" << endl;
    }
    else if(b < 0){
        cout << "Length of s2 is bigger than s1" << endl;
    }

    // c) Copying one string to other

    cout << endl << "c) Copying one string to other" << endl;
    cout << "Enter a string: ";
    char cpy1[1000];
    char cpy2[1000];
    cin >> cpy1;
    cout << "Enter another string: ";
    cin >> cpy2;

    strcpy(cpy1, cpy2);

    cout << "Copying the second string to the first, it becomes: ";
    cout << cpy1 << endl;

    // d) Concatenating two strings

    cout << endl << "d) Concatenating two strings" << endl;
    cout << "Enter a string: ";
    char conct1[1000];
    char conct2[1000];
    cin >> conct1;
    cout << "Enter another string: ";
    cin >> conct2;

    strcat(conct1, conct2);

    cout << "Concatenating the second string to the first, it becomes: ";
    cout << conct1 << endl;

    // e) Finding the reverse of a string 

    cout << endl << "e) Finding the reverse of a string" << endl;
    cout << "Enter a string: ";
    char rev1[1000];
    cin >> rev1;

    strrev(rev1);

    cout << "Reversing the string, it becomes: ";
    cout << rev1;

    return 0;
}
