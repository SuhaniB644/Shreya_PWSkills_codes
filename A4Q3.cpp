#include<iostream>
using namespace std;
int main(){
    //find sum of n natural numbers;
    int num, sum=0;
    cout<<"Enter the Natural number upto with sum is to be calculated: ";
    cin>>num;
    for(int i =1 ; i<=num; i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}