#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter string:";
    getline(cin,s);
    int i,j,a,flag=0;
    char c,d;
    a=s.length();
    for(i=0;i<a;i++){
        d=tolower(s[i]);
        s1=s1+d;
    }

    for(i=0;i<a;i++){
        for(j=0;j<i;j++){
            if(s1[i]==s1[j]){
               c=s[i];
               flag=1;
               break;
              
            }
            
            
        }
        if(flag==1){
            break;
        }
    }
   if(flag==1){
     cout<<"First repeating character:"<<c;

    }
    else{
        cout<<"No repeating character";
    }


}