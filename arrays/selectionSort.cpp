#include <iostream>
using namespace std;


int main(){
    int n; 
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            
            if(arr[j]<arr[i]){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
       
    }
    for(int i = 0; i<n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}

// int* selectionSort(int arr[]){
//     int n = sizeof(arr)/ sizeof(arr[0]);
    
//     return arr;
// }