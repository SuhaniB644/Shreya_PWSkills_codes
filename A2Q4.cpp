/*Write a program to calculate the sum of the first and 
the second last digit of a 5 digit number.*/
#include<iostream>
using namespace std;
int main(){
    int num, d1, d2;
    cout<<"Enter a 5-digit number: ";
    cin>>num;
    d1 = num/10000;
    d2 = (num%100)/10;
    cout<<"the sum is: "<<(d1 + d2);
    return 0;
}