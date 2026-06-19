#include<iostream>
using namespace std;
int main(){
    int a[50][50],b[50][50],c[50][50],r1,c1,r2,c2,i,j;
    cout<<"Enter the no of rows for matrix1:";
    cin>>r1;
    cout<<"Enter the no of columns for matrix 1:";
    cin>>c1;
    cout<<"Enter the no of rows for matrix 2:";
    cin>>r2;
    cout<<"Enter the no of columns for matrix 2:";
    cin>>c2;
    if((r1==r2)&&(c1==c2)){
        cout<<"Enter the array 1 elements:";
        for(i=0;i<r1;i++){
          for(j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the array 2 elements:";
     for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
        
    }
    cout<<"Subtraction of two matrix:"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"Subtraction cannot take place";
    }
}