#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter string:";
    getline(cin,s);
    int a=s.length();
    int i;
    for(i=0;i<a;i++){
        if(!isspace(s[i])){
            s1+=s[i];
        }
    }
    cout<<s1;
}