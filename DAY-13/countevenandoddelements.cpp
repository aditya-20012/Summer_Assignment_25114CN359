#include<iostream>
using namespace std;
int main(){
    int arr[50],i,even=0,odd=0,n;
    cout<<"Enter no of elements:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    cout<<"No of odd elements:"<<odd<<endl;
    cout<<"No of even elements:"<<even;
}