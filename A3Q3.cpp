/*Write a program to take input from the User for Cost price and 
selling price and calculate Profit or Loss*/
#include<iostream>
using namespace std;
int main(){
    int CP, SP, ans;
    cout<<"Enter the Cost price: Rs.";
    cin>>CP;
    cout<<"Enter the Selling price: Rs.";
    cin>>SP;
    if(SP >= CP){
        cout<<"The profit is: "<<SP-CP<<endl;
    }
    if(CP > SP){
        cout<<"The loss is: Rs."<<CP-SP<<endl;
    }
    return 0;
}