#include<iostream>
using namespace std;
int main(){
    int a[50],x,n,i,c;
    cout<<"Enter no of elements:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to be searched:";
    cin>>x;
    for(i=0;i<n;i++){
        if(x==a[i]){
           break;

        }
       
      

    }
    if(x==a[i]){
        cout<<"Element found at:"<<i;
    }
    else{
        cout<<"Element not found";
    }
   
}