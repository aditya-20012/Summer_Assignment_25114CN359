#include<iostream>
using namespace std;
int main(){
    int a[50][50],b[50][50],r,c,i,j;
    cout<<"Enter the no of rows for matrix:";
    cin>>r;
    cout<<"Enter the no of columns for matrix :";
    cin>>c;
    cout<<"Enter the array 1 elements:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            b[i][j]=a[j][i];
        }
    }
    cout<<"Transpose of matrix:"<<endl;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}