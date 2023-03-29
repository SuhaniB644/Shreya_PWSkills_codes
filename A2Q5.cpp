/*Write a program to calculate the sum of digits of a 3 digit number.*/
#include<iostream>
using namespace std;
int main(){
    int num, d1, d2,d3;
    cout<<"Enter a 3-digit number: ";
    cin>>num;
    d1=(num/100);
    d2=(num%100)/10;
    d3=(num%10);
    int sum = d1 + d2 + d3;
    cout<<"The digits are "<<d1<<", "<<d2<<", "<<d3<<endl;
    cout<<"The sum is:"<<sum;
    return 0;
}