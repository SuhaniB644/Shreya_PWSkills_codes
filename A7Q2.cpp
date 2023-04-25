#include<iostream>
using namespace std;
/*Given an integer array and its size, find the sum of the greatest 
and the smallest integer present in the array. Here 1< size <101*/
void size(int n, int array[]){
    int small=array[0],big = array[0];
    for(int i=0;i<n;i++){
        if(small>array[i]){
            small=array[i];
        }
        if(array[i]>big){
            big=array[i];
        }
    }
    cout<<(small+big)<<endl;
}
int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
    int num[n];
    cout<<"Enter elements: ";
    //getting input
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    size(n,num);
    return 0;
}