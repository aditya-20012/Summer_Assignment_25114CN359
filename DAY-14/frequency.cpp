#include<iostream>
using namespace std;
int main(){
    int a[50],x,n,i,c=0;
    cout<<"Enter no of elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"Enter the element to find frequency:";
    cin>>x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            c+=1;
        }
    }
    cout<<"Frequency of element:"<<c;

}