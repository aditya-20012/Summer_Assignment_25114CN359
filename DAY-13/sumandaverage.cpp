#include<iostream>
using namespace std;
int main(){
    int arr[50],i,sum=0,avg,n;
    cout<<"Enter no of elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    cout<<"Sum of all elements:"<<sum<<endl;
    cout<<"Average of all elements:"<<avg;

}