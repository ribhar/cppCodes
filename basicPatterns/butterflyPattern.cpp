#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
       
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=(n*2)-(i*2); j>0; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    for(int i=n; i>=0; i--){
       
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=(n-i)*2; j++){
            cout<<" ";
        }
       for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}