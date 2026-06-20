#include<iostream>
using namespace std;
int main(){
    int a[50][50],b[50][50],c[50][50],r1,c1,r2,c2,i,j,k=0;
    cout<<"Enter the no of rows for matrix1:";
    cin>>r1;
    cout<<"Enter the no of columns for matrix 1:";
    cin>>c1;
    cout<<"Enter the no of rows for matrix 2:";
    cin>>r2;
    cout<<"Enter the no of columns for matrix 2:";
    cin>>c2;
    if(c1==r2){
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
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<r1;k++){
                c[i][j]+=a[i][k]*b[k][j];
                
            }
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;

    }


    }
    else{
        cout<<"Matrix multiplication cannot take place";
    }
}