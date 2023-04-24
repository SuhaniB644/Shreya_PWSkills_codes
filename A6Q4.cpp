#include<iostream>
using namespace std;
//function to print all odd numbers between 2 given numbers.
void odd(int a, int b){
    for(int i=a; i<=b; i++){
        if(i%2==1){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    odd(a,b);
    return 0;
}