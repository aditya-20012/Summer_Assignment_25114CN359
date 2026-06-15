#include<iostream>
using namespace std;
int main(){
    int ar[50],c,i,n,k,j;
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter no of rotations:";
    cin>>k;
    for(i=0;i<k;i++){
         c=ar[0];
        for(j=0;j<n;j++){
            ar[j]=ar[j+1];
        }
        ar[n-1]=c;

    }
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

}