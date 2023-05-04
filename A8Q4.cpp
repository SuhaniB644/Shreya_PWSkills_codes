/*Q4 - Given a vector arr[] sorted in increasing order. Return an array of 
squares of each number sorted in increasing order. 
Where size of vector 1<size<101.*/
#include<iostream>
using namespace std;
int square(int arr1[],int size){
    for(int i=0; i<size; i++){
        arr1[i]*=arr1[i];//25 16 9 4 1
    }
    for(int i = 0; i<(size); i++){//1 16 9 4 25
        for(int j=i+1;j<size;j++){
            if(arr1[i]>arr1[j]){
            //swap
            int a= arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=a;
        }
        }
    }
    cout<<'[';
    for(int i= 0; i<size;i++){
        cout<<arr1[i];
        if(i<size-1){
            cout<<',';
        }
    }
    cout<<']';
    
}
int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
    int num[n];
    cout<<"Enter elements in increasing order: ";
    //getting input
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    square(num,n);
    return 0;
    
}    