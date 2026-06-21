#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin,s);
    int i;
    int c=0;
    for(i=0;s[i]!='\0';i++){
       c+=1;
    }
    cout<<"Length of string:"<<c;
   
}