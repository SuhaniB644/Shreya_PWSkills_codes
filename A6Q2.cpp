#include<iostream>
using namespace std;
//function to print area and circumference of circle, given the radius.
void circle(int r){
    
    cout<<"Area : "<<(3.14*r*r)<<endl;
    cout<<"Circumference : "<<(2*3.14*r)<<endl;
}
int main(){
    int n;
    cout<<"enter radius: ";
    cin>>n;
    circle(n);
    return 0;
}