#include <iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;

    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    int n;
    cin >> n;

    fib(n);

    return 0;
}


int fib2(int n){
    if( n == 0 || n == 1){
        return n;
    }

    return fib2(n-1) + fib2(n-2);
}

int main2(){

    int n;
    cin>>n;
    cout << fib2(n);
    return 0;
}