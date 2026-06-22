#include<iostream>
using namespace std;
int main(){
    string s,b;
    cout<<"Enter string";
    getline(cin,s);
    int i;
    int c=s.length();
    for(i=c-1;i>=0;i--){
        b=b+s[i];

    }
    cout<<b;
    if(b==s){
        cout<<"Palindrome string";
    }
    else{
        cout<<"Not palindrome string";
    }
    
   
}