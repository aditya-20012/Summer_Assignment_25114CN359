#include<iostream>
using namespace std;
int main(){
    int a[50],i,n,j,s,c=0,b=0;
    cout<<"Enter no of elements:";
    cin>>n;
    bool x=true;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the sum:";
    cin>>s;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==s){
               c=a[i];
               b=a[j];
               cout<<"The pair is:"<<c<<","<<b<<endl;
            }
            else{
                x=false;
                break;
            }
            
        }
    }
    if(x==false){
        cout<<"No pair found";
    }
    
    
}