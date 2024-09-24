#include <iostream>
using namespace std;


int year(int leap){
    if(leap % 4 == 0){
        cout << "The year " << leap << " is a leap year." << endl;
    }
    else{
        cout << "The year " << leap << " is not a leap year.";
    }
}

int main(){

    int leap;
    cout<< "Enter a year to check if its leap or not: ";
    cin >> leap;
    year(leap);

return 0;
}
