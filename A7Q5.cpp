#include<iostream>
using namespace std;
/*Given an array containing n distinct integers in the range [0,n] 
(inclusive of both 0 and n). Find and return the only number of the 
range that is not present in the array. Here 1<n<101.*/
int missingNum(int arr[],int n){
    int sumArr=((n)*(n+1))/2;
    int sum = 0; 
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return(sumArr-sum);

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
    int ans=missingNum(num,n);
    cout<<"the missing number is: "<<ans;
    return 0;
}