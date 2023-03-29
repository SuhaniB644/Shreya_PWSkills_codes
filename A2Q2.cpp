/*Q2 - Write a program to take the values of two variables a and b 
from the keyboard and then check if both the conditions 'a < 50' and 
'a < b' are true.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, ans;
    cout<<"Enter two numbers: ";
    cin>>a>>b; 
    a==b? (ans = 1) : (ans = 0);
    cout<<ans<<endl;
    return 0;
}