/*Write a program to print positive number entered by user, if user enters
a negative it is skipped*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<"This number is negative and hence skipped."<<endl;
    }
    return 0;
}