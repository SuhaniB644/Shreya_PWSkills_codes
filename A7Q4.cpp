/*Given two arrays a[] and b[] of same size.
Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. 
Here 1<size<101*/

#include<iostream>
using namespace std;
int minSum(int a[],int b[], int m){
    int minA=101,minB=101,min2A=101,min2B=101;
    int indexA=0,indexB=0;

    for(int i = 0;i<m;i++){
        if(a[i]<minA){
            min2A=minA;
            minA=a[i];
            indexA=i;
        }
        else if(a[i]<min2A){
            min2A=a[i];
        }
    }
    for(int i = 0;i<m;i++){
        if(b[i]<minB){
            min2B=minB;
            minB=b[i];
            indexB=i;
        }
        else if(b[i]<min2B){
            min2B=b[i];
        }
    } 
    if(indexA!=indexB){
        return(minA+minB);
    }
    else{
        return min(minA+min2B,minB+min2A);
    }
}
int main(){
    int m;
    cout<<"Enter size of 2 arrays:";
    cin>>m;
    int a[m],b[m];
    cout<<"Elements of 1st array(1<size<101):"<<endl;
    for(int i = 0; i<m; i++){
        cin>>a[i];
    }
    cout<<"Elements of 2nd array(1<size<101):"<<endl;
    for(int i = 0; i<m; i++){
        cin>>b[i];
    }
    int soln=minSum(a,b,m);
    cout<<"sum is: "<<soln<<endl;
    return 0;

}