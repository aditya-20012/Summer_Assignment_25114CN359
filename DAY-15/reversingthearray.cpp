//Wap to copy the content of array into another in the reverse order 
#include<iostream>
using namespace std;
int main(){
    int ar[50],i,n,b[50],j=0;
    cout<<"Enter no of elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=n-1;i>=0;i--){
        b[j]=ar[i];
        j++;
       
    }
    cout<<"Printing the elements:";
    for(i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
}
