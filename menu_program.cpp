#include <iostream>
using namespace std;

int sum(int num){

    int summ = 0;
    int display_num = num;
    while(num != 0){
        int last_digit = num % 10;
        summ += last_digit;
        num = num/10;
    }
    cout << "The sum of all numbers of " << display_num << " is " << summ << endl;
    return 0;
}

int revv(int num){

    cout << "The reverse of " << num << " is ";
    while(num !=0){
        cout << num % 10;
        num /= 10;
    }
    return 0;
}

int count(int a){
    int whatever = 0;
    for(int i=1; a!=0; i++){
        a /= 10;
        whatever ++;
    }
    cout << whatever;
    return 0;
}
