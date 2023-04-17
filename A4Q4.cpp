#include<iostream>
using namespace std;
int main(){
    //program to reverse a given integer
    int num, digit, ans=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        digit=num%10;
        ans=(ans*10) + digit;
        num/=10;
    }
    cout<<ans<<endl;
    return 0;
}