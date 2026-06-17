#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[50],b[50],c[50],d[50],i,n1,n2,n3;
    cout<<"Enter the number of terms for array 1:";
    cin>>n1;
    cout<<"Enter the number of terms for array2:";
    cin>>n2;
    cout<<"Enter array 1 elements:";
    for(i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter array 2 elements:";
    for(i=0;i<n2;i++){
        cin>>b[i];

    }
    n3=n1+n2;
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(i=0;i<n2;i++){
        c[i+n1]=b[i];
    }
    cout<<"Printing union of array:";
    sort(c,c+n3);
    for(i=0;i<n3;i++){
        if(c[i]==c[i+1]){

        }
        else{
            cout<<c[i]<<endl;
        }
    }

}