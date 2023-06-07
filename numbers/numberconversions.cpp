#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int basePower = 1, // 2 as base, initial power is 0, 2^0 for starting hence 2^0 is 1.
        covertedNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        covertedNumber += lastDigit * basePower; // Last digit * 2^power, eg: 1*2^2 | 1*4, 1*2^6 | 1*64.
        basePower *= 2;                          // Increse power of base 2, eg 2*2*.......2 .
        n /= 10;                                 // Remove one digit from last.
    }
    return covertedNumber;
}

int decimalToBinary(int n)
{
    int highestPower = 1, covertedNumber = 0;

    while (highestPower <= n)
    {
        highestPower *= 2; // find highest power of 2.
    }
    highestPower /= 2; // above method will give one higher power then n so get on lower power by dividing it with 2.

    while (highestPower > 0)
    {
        int lastDigit = n / highestPower; // Get qoutiant.
        n -= lastDigit * highestPower;    // Basical subtract highest power's number represention from n.
        highestPower /= 2;                //  get next down power.
        covertedNumber = (covertedNumber * 10) + lastDigit;
    }
    return covertedNumber;
}

int octalToDecimal(int n)
{
    int basePower = 1, // 8 as base, initial power is 0, 8^0 for starting hence 8^0 is 1.
        covertedNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        covertedNumber += lastDigit * basePower; // Last digit * 2^power, eg: 1*8^2 | 1*64, 1*8^3 | 1*512.
        basePower *= 8;                          // Increse power of base 8, eg 8*8*.......8 .
        n /= 10;                                 // Remove one digit from last.
    }
    return covertedNumber;
}

int hexadecimalToDecimal(string n)
{
    int basePower = 1, // 8 as base, initial power is 0, 8^0 for starting hence 8^0 is 1.
        covertedNumber = 0;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            covertedNumber += (n[i] - '0') * basePower; // Last digit * 16^power, eg: 1*16^2 | 1*256, F*16^3 | 15*4096.
        }
        else if (n[i] >= 'a' && n[i] <= 'f')
        {
            covertedNumber += (n[i] - 'a' + 10) * basePower; // Get alphabets hexa representation, Last digit * 16^power, eg: 1*16^2 | 1*256, F*16^3 | 15*4096.
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            covertedNumber += (n[i] - 'A' + 10) * basePower; // Get alphabets hexa representation, Last digit * 16^power, eg: 1*16^2 | 1*256, F*16^3 | 15*4096.
        }

        basePower *= 16; // Increse power of base 16, eg 16*16*.......16 .
    }
    return covertedNumber;
}

int main()
{
    int n;
    cin >> n;

    // cout<<"Binary "<<n<<" in decimal is "<<binaryToDecimal(n)<<endl;
    // cout<<"Octal "<<n<<" in decimal is "<< octalToDecimal(n)<<endl;
    // cout << "Hexadecimal " << n << " in decimal is " << hexadecimalToDecimal(n) << endl;
    cout << "Decimal " << n << " in binary is " << decimalToBinary(n) << endl;
    return 0;
}