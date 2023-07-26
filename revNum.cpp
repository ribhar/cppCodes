#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rev;
    while(n>0){
        int rem = n%10;
        rev = (rev*10)+rem;
        n /= 10; 
    }
    cout << rev;
    return 0;
}