#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
    int num[n];
    cout<<"Enter elements: ";
    //getting input
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    
    //counting:
    int odd=0,even=0;
    for(int i =0;i<n;i++){
        if(num[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Odd:"<<odd<<endl<<"Even:"<<even<<endl;
    return 0;
}