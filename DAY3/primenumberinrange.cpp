#include<iostream>
using namespace std;
int prime(int n){
    int i,c=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            c+=1;
        }
    }
    if(c<2){
        return c;
    }
}
int main(){
    int nu,nl,n,i,b;
    cout<<"Enter lower limit:";
    cin>>nl;
    cout<<"Enter upper limit:";
    cin>>nu;
    for(i=nl;i<=nu;i++){
        n=i;
        b=prime(n);
        if((b<2)&&n!=1){
            cout<<n<<endl;
        }
        
        

    }
}