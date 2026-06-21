#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin,s);
    int i;
    int c=s.length();
    for(i=c-1;i>=0;i--){
        cout<<s[i]<<" ";


    }
   
}