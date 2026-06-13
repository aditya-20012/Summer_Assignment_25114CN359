#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[100],n; 
    cout<<"Enter no of elements:";
    cin>>n;
    cout<<"Enter elements:";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Printing elements:";
    
    for (int i=0;i<n;i++){
        cout<<a[i];
    }

    
}