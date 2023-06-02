#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool flag=1;

    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout<<"Non Prime number";
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout<<"Prime number";
    }

    return 0;
}