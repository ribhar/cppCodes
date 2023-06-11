#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int basePower = 1, // 2 as base, initial power is 0, 2^0 for starting hence 2^0 is 1.
        convertedNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        convertedNumber += lastDigit * basePower; // Last digit * 2^power, eg: 1*2^2 | 1*4, 1*2^6 | 1*64.
        basePower *= 2;                          // Increse power of base 2, eg 2*2*.......2 .
        n /= 10;                                 // Remove one digit from last.
    }
    return convertedNumber;
}

int decimalToBinary(int n)
{
    int highestPower = 1, convertedNumber = 0;

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
        convertedNumber = (convertedNumber * 10) + lastDigit;
    }
    return convertedNumber;
}

int octalToDecimal(int n)
{
    int basePower = 1, // 8 as base, initial power is 0, 8^0 for starting hence 8^0 is 1.
        convertedNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        convertedNumber += lastDigit * basePower; // Last digit * 2^power, eg: 1*8^2 | 1*64, 1*8^3 | 1*512.
        basePower *= 8;                          // Increse power of base 8, eg 8*8*.......8 .
        n /= 10;                                 // Remove one digit from last.
    }
    return convertedNumber;
}


int decimalToOctal(int n)
{
    int highestPower = 1, convertedNumber = 0;

    while (highestPower <= n)
    {
        highestPower *= 8; // find highest power of 8.
    }
    highestPower /= 8; // above method will give one higher power then n so get on lower power by dividing it with 8.

    while (highestPower > 0)
    {
        int lastDigit = n / highestPower; // Get qoutiant.
        n -= lastDigit * highestPower;    // Basical subtract highest power's number represention from n.
        highestPower /= 8;                //  get next down power.
        convertedNumber = (convertedNumber * 10) + lastDigit;
    }
    return convertedNumber;
}


int hexadecimalToDecimal(string n)
{
    int basePower = 1, // 8 as base, initial power is 0, 8^0 for starting hence 8^0 is 1.
        convertedNumber = 0;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            convertedNumber += (n[i] - '0') * basePower; // Last digit * 16^power, eg: 1*16^2 | 1*256, F*16^3 | 15*4096.
        }
        else if (n[i] >= 'a' && n[i] <= 'f')
        {
            convertedNumber += (n[i] - 'a' + 10) * basePower; // Get alphabets hexa representation, Last digit * 16^power, eg: 1*16^2 | 1*256, F*16^3 | 15*4096.
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            convertedNumber += (n[i] - 'A' + 10) * basePower; // Get alphabets hexa representation, Last digit * 16^power, eg: 1*16^2 | 1*256, F*16^3 | 15*4096.
        }

        basePower *= 16; // Increse power of base 16, eg 16*16*.......16 .
    }
    return convertedNumber;
}


string decimalToHexadecimal(int n)
{
    if(n ==0){
        return "0";
    }
    int highestPower = 1; 
    string convertedNumber = "";

    while (highestPower <= n)
    {
        highestPower *= 16; // find highest power of 16.
    }
    highestPower /= 16; // Adjust highest power to the correct value.


    while (highestPower > 0)
    {
        int quotient = n / highestPower; // Get qoutiant.
        n -= quotient * highestPower;    // Subtract highest power's representation from n.
        highestPower /= 16;               //  Move to lower power.
        
           // Convert the quotient to its hexadecimal representation.
        if (quotient >= 10) {
                convertedNumber += 'A' + (quotient - 10);
            } else {
                convertedNumber += '0' + quotient;
            }
            highestPower /= 16;  
    }
    return convertedNumber;
}


string decimalToHexadecimal2(int num)
{
    if (num == 0) {
            return "0";
        }
        
        string hexChars = "0123456789abcdef";
        string convertedStr = "";
        
        unsigned int unsignedNum = num;
        
        while (unsignedNum != 0) {
            int digit = unsignedNum % 16;
            convertedStr = hexChars[digit] + convertedStr;
            unsignedNum /= 16;
        }
        return convertedStr;
}

int main()
{
    int n;
    cin >> n;
    // cout<<"Binary "<<n<<" in decimal is "<<binaryToDecimal(n)<<endl;
    // cout<<"Octal "<<n<<" in decimal is "<< octalToDecimal(n)<<endl;
    // cout << "Hexadecimal " << n << " in decimal is " << hexadecimalToDecimal(n) << endl;
    // cout << "Decimal " << n << " in binary is " << decimalToBinary(n) << endl;
    // cout << "Decimal " << n << " in octal is " << decimalToOctal(n) << endl;
    // cout << "Decimal " << n << " in hexadecimal is " << decimalToHexadecimal(n) << endl;
    cout << "Decimal " << n << " in hexadecimal is " <<  decimalToHexadecimal2(n) << endl;
    return 0;
}