/*given an integer array containing n elements, find the element in the array
for which all the elements to its left are smaller than it and all elements to 
its right are larger than it*/
#include<iostream>
using namespace std;
int largest ( int arr[], int n)  {  
    int i;   
    int max=arr[0] ;   
        for(i = 1; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        } 
    return max;  
}
int smallest(int arr[], int n){  
    int i;   
    int min=arr[0] ;   
        for(i = 1; i<n; i++){
            if(arr[i]<min){
                min=arr[i];
            }
        } 
    return min;  
}
int fun(int arr[],int n){//1 6 5 7 10 8 9//7
    for(int i=0;i<n;i++){//0
        int prefix[i],suffix[n-i-1];//4
        for(int j=0;j<(i);j++){
            prefix[j]=arr[j];
        }
        for(int j=(i+1),p=0;j<n;j++,p++){
            suffix[p]=arr[j];
        }
        if((largest(prefix,i)<arr[i]) && (smallest(suffix,n-i)>arr[i])){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
    int num[n];
    cout<<"Enter elements in the range(0,array size): ";
    //getting input
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int ans =fun(num, n);
    cout<<ans;
    return 0;
}