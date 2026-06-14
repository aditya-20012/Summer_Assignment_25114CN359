#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[20],i,maximum=0,n;
    int second_largest=0;
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    maximum=arr[0];
    for(i=0;i<n;i++){
        maximum=max(maximum,arr[i]);
        
    }
    second_largest=arr[0];
    for(i=0;i<n;i++){
        if((arr[i]>second_largest)&&(arr[i]<maximum)){
            second_largest=arr[i];
            cout<<"Second largest="<<second_largest;

           
             
           
           
            
 
        }
    }
    
    
}