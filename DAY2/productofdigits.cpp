#include<iostream>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter number :";
    cin>>n;
    for(int i=10;n!=0;){
       int a=n%i;
       product=product*a;
       n=n/10;
        

    }
    cout<<"Product of digits:"<<product;
}