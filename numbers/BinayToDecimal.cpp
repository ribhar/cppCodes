#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int convertedNumber = 0;
    int powerof2 = 1; // intialize with 1 which is 2^0.

    while(n>0){
        int lastDigit = n%10; // get lastDigit.
        convertedNumber += lastDigit*powerof2;
        powerof2 *=2; // increase to next power of 2.
        n /=10;
    }

    return convertedNumber;
}

int main(){
    int n;
    cin>>n;
    cout << binaryToDecimal(n);
    return 0;
}