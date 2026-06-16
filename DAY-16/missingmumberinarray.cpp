#include<iostream>
using namespace std;
int main(){
    int n,a[50],i,total_sum,sum=0,missing_number=0;
    cout<<"Enter the value of n:";
    cin>>n;
    total_sum=((n)*(n+1))/2;
    for(i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    missing_number=total_sum-sum;
    cout<<"Missing number:"<<missing_number;
    


    
}