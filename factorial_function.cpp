#include <iostream>
using namespace std;

int factorial(int num){

    int fact = 1;

    for(int i=1; i<=num; i++){
        fact *= i;
    }

    return fact;
}

int main(){

    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    int factor = factorial(num);

    cout << "The factorial of " << num << " is " << factor;
    
    return 0;
}
