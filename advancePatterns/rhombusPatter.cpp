#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = n; i >=1; i--)
    {
        int spaces = i-1;
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }
          for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}


//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *