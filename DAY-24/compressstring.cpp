#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string:";
    getline(cin,s);
    int a=s.length();
    int c=1,i;
    for(i=0;i<a;i++){
        if(s[i]==s[i+1]){
            c+=1;
        }
        else{
            cout<<s[i]<<c;
            c=1;
        }
    } 

}

