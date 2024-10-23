#include <iostream>
#include "checkNumber.hpp"
using namespace std;

int main(){
    string customerNumber;
    cout << "Enter your customer number: " << endl;
    cin >> customerNumber;
    if(checkNumber(customerNumber)){
        cout << "The number is valid." << endl;
    }
    else{
        cout << "The number is invalid." << endl;
    }
    return 0;
}
