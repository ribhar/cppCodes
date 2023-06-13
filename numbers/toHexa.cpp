#include <iostream>
using namespace std;

string toHexa(int n)
{
    if (n == 0)
    {
        return "0";
    }
    string convertedNumeber = "";

    string hexaChar = "0123456789abcdef";
    int powerof16 = 1; // intialize with 1 which is 16^0.

    while (powerof16 <= n) // find the highest power that can divide n
    {
        powerof16 *= 16;
    }
    powerof16 /= 16; // above loop gives one higher power, so get one lower power.

    while (powerof16 > 0) // until powerof16 becomes 0 which means number fully converted.
    {
        int qoutient = n / powerof16; // get qoutient, which coresponds number of times of highest power of 16 is a certain number which divides n.
        n -= qoutient * powerof16;    // subtract the the number that can be divided by highest power.
        powerof16 /= 16;              // get down to next lower power.  also the base condition
        convertedNumeber += hexaChar[qoutient];
    }

    return convertedNumeber;
}

int main()
{
    int n;
    cin >> n;

    cout << toHexa(n);
    return 0;
}