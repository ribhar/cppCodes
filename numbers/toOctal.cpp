#include <iostream>
using namespace std;

int toOctal(int n){
    int convertedNumber = 0;
    int powerOf8 = 1; // intialize with 1 which is 8^0.

    while (powerOf8<=n) // find the highest power of 8 that can divide the n.
    {
        powerOf8 *= 8;
    }
    powerOf8 /=8; // Above loop while give one higher power, so get down to one lower power.

    while (powerOf8>0)
    {
        int qoutient = n/powerOf8;
        n -= qoutient*powerOf8; // powerof8 is a number which divides n, so subtract the number that can be divided.
        powerOf8 /= 8; //get down to next lower power.
        convertedNumber = convertedNumber*10 + qoutient;  
    }
    

    return convertedNumber;
}

int main(){
    int n;
    cin>>n;
    cout << toOctal(n);
    return 0;
}