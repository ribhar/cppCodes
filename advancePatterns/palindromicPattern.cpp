#include <iostream>
using namespace std; 

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int spaces = (n-i)*2; 
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=2; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}