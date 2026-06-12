#include<iostream>
using namespace std;
int palindrome(int n){
    int pa=0,i,a;
    for(i=10;n!=0;){
        a=n%i;
        pa=pa*10;
        pa=pa+a;
        n=n/10;

    }
    return pa;

}
int main(){
    int n,d;
    cout<<"Enter number:";
    cin>>n;
    d=palindrome(n);
    if(d==n){
        cout<<"Palindrome";
    }
}