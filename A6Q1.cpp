#include<iostream>
using namespace std;
//function to print squares of first 5 natural numbers;

int square(){
    for(int i =1; i<=5; i++){
        cout<<(i*i)<<endl;
    }
    return 0;
}
int main(){
    square();
}