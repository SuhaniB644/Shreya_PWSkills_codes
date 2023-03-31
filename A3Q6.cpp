/*Program to calculate marks to grades*/
#include<iostream>
using namespace std;
int main(){
    int marks;
    do{
        cout<<"Enter yout total marks out of 100: ";
        cin>>marks;
    }while(marks<0 || marks>100);
  
    if(marks >= 90 && marks <= 100){
        cout<<"Your Grade is: A+"<<endl<<"Congratulations!";
    }
    else if(marks >= 80){
        cout<<"Your Grade is: A"<<endl<<"Congratulations!";
    }
    else if(marks >= 70){
        cout<<"Your Grade is: B+"<<endl<<"Well done!";
    }
    else if(marks >= 60){
        cout<<"Your Grade is: B"<<endl<<"Best wishes!";
    }
    else if(marks >= 50){
        cout<<"Your Grade is: C"<<endl<<"Can improve!";
    }
    else if(marks >= 40){
        cout<<"Your Grade is: D"<<endl<<"Need to improve!";
    }
    else if(marks >= 30){
        cout<<"Your Grade is: E"<<endl<<"You have passed!";
    }
    else{
        cout<<"Your Grade is: F"<<endl<<"Better luck next time!";
    }
}