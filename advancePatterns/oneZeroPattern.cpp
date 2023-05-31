#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isOne = 1;

    for (int i = 1; i <=n; i++)
    {
        for(int j=1; j<=i; j++){
            isOne? cout<<"1 ":cout<<"0 ";
            isOne?isOne = 0: isOne = 1;
        
        }
        cout<<endl;
    }
    
    return 0;
}