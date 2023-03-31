/*Program which takes values of length and breadth of 4 sided polygon, 
and check if its a square or not*/
#include<iostream>
using namespace std;
int main(){
    int len, brd;
    cout<<"Length: ";
    cin>>len;
    cout<<"Breadth: ";
    cin>>brd;
    if(len == brd){
        cout<<"It's a square.";
    }
    else{
        cout<<"It's a rectangle.";
    }
    cout<<endl;
    return 0;
    
}