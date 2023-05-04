/*Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. 
Merge the two arrays into a single sorted array of size m+n.*/
#include<iostream>
using namespace std;
int incOrd(int arr1[],int n,int arr2[],int m){
    int i=n-1, j=m-1, k=(m+n)-1;
    int ans[m+n];
    while(j>=0 && i>=0){
        if(arr1[i]>arr2[j]){
            ans[k--]=arr1[i--];
        }
        else{
            ans[k--]=arr2[j--];
        }
    }
    while(j>=0){
        ans[k--]=arr2[j--];
    }
    while(i>=0){
        ans[k--]=arr1[i--];
    }
    for(int i = 0; i<m+n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
int main(){
    int m, n;
    cout<<"array size: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter elements(increasing order): ";
    //getting input
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"array size: ";
    cin>>m;
    int arr2[n];
    cout<<"Enter elements(increasing order): ";
    //getting input
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int ans=incOrd(arr1,n,arr2,m);
    return ans;
}