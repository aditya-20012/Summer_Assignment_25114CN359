#include<iostream>
using namespace std;
int perfectnumber(int n){
    int perfect=0,i;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            perfect+=i;
        }

    }
    return perfect;
}
int main(){
    int n,per;
    cout<<"Enter number:";
    cin>>n;
    per=perfectnumber(n);
    if(per==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not perfect number";
    }


}