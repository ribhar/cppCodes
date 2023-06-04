#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = n*(n+1)/2;
    int ans2;
    for(int i=1; i<=n;i++){
        ans2+=i;
    }
    cout<<ans<<" "<<ans2<<endl;
    return 0;
}