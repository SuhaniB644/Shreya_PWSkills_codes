#include<iostream>
using namespace std;
int main(){
    //program to calculate factorial of a number
    int n, ans=1;
    cout<<"factorial of: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        ans*=i;
    }
    cout<<ans<<endl;
    return 0;
}