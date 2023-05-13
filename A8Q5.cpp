/*Given a vector arr[] sorted in increasing order of n size and an integer x, 
find the no of unique pairs that exist in the array whose absolute sum is exactly x.*/
#include<iostream>
using namespace std;
int existSum(int n, int arr1[],int x){
    int ans=0;
    int i=0, j=(n-1);
    while(i<j){
        if(arr1[i]+arr1[j]==x){
            ans++;
            i++;
            j--;
        }
        else if(arr1[i]+arr1[j]<x){
            i++;
        }
        else{
            j--;
        }
    }
        
    return ans;
}
int main(){
    int n,x;
    cout<<"array size: ";
    cin>>n;
    int num[n];
    cout<<"Enter elements: ";
    //getting input
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"Enter x: ";
    cin>>x;
    int ans=existSum(n, num, x);
    cout<<"total pairs:"<<ans<<endl;
    return 0;
}