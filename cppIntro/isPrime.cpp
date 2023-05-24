#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n<2){
        cout<<n;
        cout<<" is not a prime number"<<endl;
    }

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<n;
            cout<<" is not a prime number";
            return 0;
        }
    }
    

    cout<<n;
    cout<<" is a prime number"<<endl;

    return 0;
}