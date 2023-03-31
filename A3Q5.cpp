/*Create a calculator using switch statement to perform addn, subrn
multipln, divn.*/
#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    char op;
    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;
    cout<<"enter the op:(+,-,*,/) \n";
    cin>>op;
    switch (op){
        case '+':
        cout<<n1 + n2;
        break;

        case '-':
        cout<<n1 - n2;
        break;

        case '*':
        cout<<n1 * n2;
        break;

        case '/':
        cout<<n1 / n2;
        break;

        default:
        cout<<"Error! ";
    }
    
}    