#include <iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==0 || i==row-1){
                cout<<"*";
                
            }else{
                j==0 || j==col-1? cout<<"*": cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
    
    return 0;

}