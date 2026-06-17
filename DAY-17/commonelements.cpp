#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[50],b[50],c[50],d[50],i,n1,n2,j,e,f;
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
    sort(a,a+n1);
    sort(b,b+n2);
    cout<<"Common elements:";
    for(i=0;i<n1;i++){
       for(j=0;j<n2;j++){
         if(a[i]==b[j]){
          cout<<a[i]<<endl;
           break;
       }
      }
    
    }
}
