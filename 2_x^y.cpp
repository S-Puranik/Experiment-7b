#include <iostream>
using namespace std;

void power(int x, int y){
    int result = 1;
    for(int i=1; i<=y; i++){
        result *= x;
    }
    cout << "X^Y is: " << result << endl;
}

int main(){
    int x,y;
    cout << "Enter the value of X and Y to get X^Y" << endl;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    power(x,y);
    return 0;
}
