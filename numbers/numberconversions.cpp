#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int basePower=1, // 2 as base, initial power is 0, 2^0 for starting hence 2^0 is 1.
    covertedNumber=0;

    while(n>0){
        int lastDigit = n%10;
        covertedNumber +=  lastDigit*basePower; // Last digit * 2^power, eg: 1*2^2 | 1*4, 1*2^6 | 1*64.
        basePower *= 2; // Increse power of base 2, eg 2*2*.......2 .
        n /= 10;  // Remove one digit from last.
    }
    return covertedNumber;

}
int main(){
    int n;
    cin>> n;

    cout<< binaryToDecimal(n)<<endl;
    return 0;
}