//Code to swap twon numbers with the help of another variable.
#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cout<<"enter X: ";
    cin>>x;
    cout<<"enter Y: ";
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<"After swapping, X: "<<x<<endl;
    cout<<"After swapping, Y: "<<y<<endl;
    return 0;
}    