#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter string:";
    getline(cin,s);
    int i,j;
    int a=s.length();
    int c=0;
    for(i=0;i<a;i++){
        if((!isspace(s[i])&& s[i]!='.'&&s[i]!=','&& s[i]!='!'&& s[i]!='?') && (i==0|| isspace(s[i-1])||s[i]=='.'|| s[i]==','||s[i]=='!'|| s[i]=='?')){
            c+=1;
            


        }
        

    }
    cout<<c;
   
}