#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ar[50],pos,n,i;
    cout<<"Enter array elements:";
    cin>>n;
    pos=0;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        if(ar[i]!=0){
            swap(ar[i],ar[pos]);
            pos+=1;
        }
    }
    for(i=0;i<n;i++){
        cout<<ar[i];
    }
}