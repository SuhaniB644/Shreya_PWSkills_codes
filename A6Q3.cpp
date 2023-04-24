#include<iostream>
using namespace std;
//Function to check if the person is eligible to vote or not, given the age .
void vote(int age){
    if(age<18){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    vote(age);
    return 0;
}