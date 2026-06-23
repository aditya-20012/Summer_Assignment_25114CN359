#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string a,b,s1,s2;
    char c,d;
    bool f=true;
    cout<<"Enter string 1:";
    getline(cin,s1);
    cout<<"Enter string 2:";
    getline(cin,s2);
    int c1,c2,i,j;
    c1=s1.length();
    c2=s2.length();
    for(i=0;i<c1;i++){
        c=tolower(s1[i]);
        a=a+c;
    }
    for(j=0;j<c2;j++){
        d=tolower(s2[j]);
        b=b+d;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if((a==b)&&(c1==c2)){
        f=true;
        cout<<"Anagram string";
        

    }
    else{
        f=false;
        cout<<"Not anagram string";
    }
    if(f==true){
        cout<<"True";
    }
    else{
        cout<<"False";

    }
    
    

}