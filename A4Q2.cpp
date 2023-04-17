#include<iostream>
using namespace std;
int main(){
    
    //Program to print all Armstrong numbers b/w 100 and 500
    for(int i = 100; i<=500; i++){
        int t=i;
        int ans = 0; 
        int digit;
        while(t>0){
            digit=t%10;
            ans = ans + (digit*digit*digit);
            t= t/10;
        }
                if (ans == i){
            cout<<i<<endl;
        }
    }
    return 0;
}