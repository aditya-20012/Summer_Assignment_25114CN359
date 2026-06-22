#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter string:";
    getline(cin,s);
    int a=s.length();
    char d;
    int c=0,i,j;
    for(i=0;i<a;i++){
        d=tolower(s[i]);
        s1=s1+d;

    }
    for(i=0;i<a;i++){
        c=count(s1.begin(),s1.end(),s1[i]);
        if(c==1){
           cout<<s1[i]<<'-'<<c<<endl;  

        }
        else{
            if(s1.find(s1[i])==i){
                cout<<s1[i]<<'-'<<c<<endl;
        
            }
        }
    }
    
}
