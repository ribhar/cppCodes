#include <iostream>
#include <typeinfo>
using namespace std;

int hexaToDecimal(string n)
{
    int convertedNumber = 0;
    int powerof16 = 1; // Intialize with 1 which is 16^0.

    for (int i = n.length() - 1; i >= 0; i--)
    {
        // cout<<n[i]<<endl;
        if (n[i] >= '0' && n[i] <= '9')
        {
            convertedNumber += (n[i] - '0') * powerof16;
        }

        else if (n[i] >= 'a' && n[i] <= 'f')
        {
            convertedNumber += (n[i] - 'a' + 10) * powerof16;
        }

        powerof16 *= 16; // increase one power of 16.
    }

    return convertedNumber;
}

int main()
{
    string n;
    cin >> n;
    cout << hexaToDecimal(n);
    return 0;
}