#include<iostream>
#include<math.h>
using namespace std;
int armstrong(int n){
   int armstrong=0,a=0,c=0;
    int z=n;
    int w=n;
    for(int i=10;n!=0;){
        n=n/10;
        c+=1;

    }
    for(int j=10;z!=0;){
        a=z%j;
        int r=(int)round(pow(a,c));
        armstrong+=r;
        z=z/10;
    }
    return armstrong;
}
int main(){
    int n,arms;
    cout<<"Enter the number:";
    cin>>n;
    arms=armstrong(n);
    if(arms==n){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not armstrong number";
    }

}
