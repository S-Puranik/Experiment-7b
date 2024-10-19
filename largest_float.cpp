#include <iostream>
using namespace std;

float largest_num(float num1, float num2, float num3){

    float largest = num1;

    if (num2 > largest){

        largest = num2;
    }
    if (num3> largest){

        largest = num3;
    }

    return largest;
}

int main(){

    float num1, num2, num3;
    cout << "Enter three float numbers to find the largest:" << endl;
    cout << "First float: ";
    cin >> num1;
    cout << "Second float: ";
    cin >> num2;
    cout << "Third float: ";
    cin >> num3;

    float largest = largest_num(num1, num2, num3);

    cout << "The largest float is: " << largest;

    return 0;
}
