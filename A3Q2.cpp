/*Write a program to print absolute value of a number enetere dy a user*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number, and we will return its absolute value."<<endl;
    cin>>n;
    cout<<"The absolute value is: ";
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<(n*(-1));
    }
    cout<<endl;
    return 0;
}