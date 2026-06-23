#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter string:";
    getline(cin,s);
    int i,j,a,e,flag=0;
    char c,d;
    a=s.length();
    for(i=0;i<a;i++){
        d=tolower(s[i]);
        s1=s1+d;
    }

    for(i=0;i<a;i++){
        if((s1.find(s1[i]==i)&&(count(s1.begin(),s1.end(),s1[i])==1))){
            cout<<"First non repeating character:"<<s1[i];
            break;

        }

    }
}