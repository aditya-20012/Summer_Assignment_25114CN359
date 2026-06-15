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
         c=ar[n-1];
        for(j=n-1;j>0;j--){
            ar[j]=ar[j-1];
        }
        ar[0]=c;

    }
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

}