/*There are 45 total pupils in the class, 25 of whom are boys. 
Write a program to find how many girls received grades "A" 
if 17 boys made up 80% of the students that received grades "A".*/
#include<iostream>
using namespace std;
int main(){
    int girls, total = 45,  boys = 20;
    
    int  A =(100*17)/80;
    cout<<A<<" are the total A graders."<<endl;
    cout<<"Total girls getting A grade are: "<<(A-17);
    return 0;

}