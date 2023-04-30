#include <iostream>
using namespace std;
int main(){
    /*Given an integer array and its size, reverse the array and print it. 
    Here 1<size<101*/
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    for(int a=0,b=(n-1);a<b;a++,b--){
        int p = arr[a];
        arr[a] = arr[b];
        arr[b] = p;
    }
    cout<<"The array reversed is: ";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }    
}

