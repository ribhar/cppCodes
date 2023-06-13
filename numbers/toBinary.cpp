#include <iostream>
using namespace std;

int toBinary(int n)
{
    int convertedNumber = 0;
    int powerOf2 = 1; // intialize with 2^0 which is one.

    while (powerOf2 <= n)
    { // find the highest power of 2 which can divide the n.
        powerOf2 *= 2;
    }
    powerOf2 /= 2;

    while (powerOf2 > 0)
    {                                                      // loop till power of 2 becomes 1 which is 2^0.
        int qoutient = n / powerOf2;                       // get qoutient .
        n -= qoutient * powerOf2;                          // subtract the number which got divided by highest power.
        powerOf2 /= 2;                                     // get down to next power.
        convertedNumber = convertedNumber * 10 + qoutient; // add remender to form binary
    }

    return convertedNumber;
}

int main()
{
    int n;
    cin >> n;
    cout << toBinary(n);
    return 0;
}