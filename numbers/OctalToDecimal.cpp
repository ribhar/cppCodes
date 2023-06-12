#include <iostream>
using namespace std;

int octalToDecimal(int n){
    int convertedNumber = 0;
    int powerOf8 = 1; // intialize with 1 which is 8^0.

    while (n>0)
    {
        int lastDigit = n%10; // get last digit.
        convertedNumber += lastDigit*powerOf8; 
        powerOf8 *=8; // increase one power of 8.
        n/=10; // remove last digit from number

    }
    

    return convertedNumber;
}

int main(){
    int n;
    cin>>n;
    cout << octalToDecimal(n);
    return 0;
}