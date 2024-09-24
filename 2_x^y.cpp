#include <iostream>
using namespace std;

void func(int x,int y){
    int result = 0;
    for(int i=1; i<=y; i++){
        result += x*x;
    }
    cout<< "X^Y is: "<< result;
}
int main(){
    int x,y;
    cout<< "Enter the value of x and y to get x^y: "<< endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    func(x,y);
return 0;
}
