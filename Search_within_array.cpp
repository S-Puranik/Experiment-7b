#include<iostream>
using namespace std;

void Search_element(){
    int array_size;
    string input;

    cout << "Enter the size of the array: ";
    cin >> array_size;

    string array[array_size];
    //There was input buffer happening in my code so i had to use the cin.ignore() function to avoid it
    // I used stackoverflow to learn about input buffer and how to resolve it.
    cin.ignore();

    for(int i=0; i<array_size; i++){
        cout<< "Enter the " << i << " element: ";
        getline(cin, array[i]);
    }

    string search_elem; 

    cout << endl <<  "Now enter the element to search in the array: ";
    getline(cin, search_elem);

    for(int i=0; i<array_size; i++){
        string whatever = array[i];
        if(whatever == search_elem){
            cout<< "The " << i << " element Matches with " << search_elem;
        }
    }
}

int main(){
    
    Search_element();
}
