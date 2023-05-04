#include<iostream>
using namespace std;
/*Given a vector arr[] sorted in increasing order of n size and an integer x, 
find if there exists a pair in the array whose sum is exactly x.*/
int existSum(int n, int arr1[],int x){
    
    for(int i =1; i<n; i++){
        for(int j =(i+1);j<n; j++){
            if((arr1[i]+arr1[j])==x){
               return 0;
            }
        }
    }
    
    return -1;
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
    if(ans==0){
        cout<<"Yes";
    }
    else if(ans==(-1)){
        cout<<"No";
    }
    return 0;
}