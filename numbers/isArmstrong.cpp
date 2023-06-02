#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int orignalN = n;
    int sum;

    while(n>0){
        int lastDigit = n%10;
        sum+=pow(lastDigit,3);
        n=n/10;
    }

    sum==orignalN? cout<<orignalN<<" is a Armstrong number\n" : cout<<orignalN<<" is not a Armstrong number\n";

    return 0;
}