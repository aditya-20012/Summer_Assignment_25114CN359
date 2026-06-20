#include<iostream>
using namespace std;
int main(){
    int a[50][50],r,c,i,j,sum=0;
    cout<<"Enter the no of rows:";
    cin>>r;
    cout<<"Enter the no of columns:";
    cin>>c;
    cout<<"Enter the array elements:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum=sum+a[i][j];
        }
        cout<<i+1<<"Row="<<sum<<endl;
        sum=0;
    }
}