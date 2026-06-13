#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[20],i,maximum=0,minimum=0,n;
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    maximum=arr[0];
    minimum=arr[0];
    for(i=0;i<n;i++){
        maximum=max(maximum,arr[i]);
        minimum=min(minimum,arr[i]);
    }
    cout<<"Maximum element:"<<maximum<<endl;
    cout<<"Minimum element:"<<minimum<<endl;

}