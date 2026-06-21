#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;
int main(){
    string s;
    string b,c;
    cout<<"Enter string";
    getline(cin,s);
    int a=s.length();
    int i;
    for(i=0;i<a;i++){
        if((s[i]>='a')&&(s[i]<='z')){
            c=toupper(s[i]);
            b=b+c;

        }
        else{
            b=b+s[i];
        }
        

    }
    cout<<b;

}