#include<iostream>
using namespace std;

int decimalToBinary(int n){
    int x = 1, ans=0;

    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /=10;
    }
    return ans;

}
int main(){
    int n;
    cin>> n;

    cout<< decimalToBinary(n)<<endl;
    return 0;
}