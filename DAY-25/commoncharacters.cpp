#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter string 1:";
    getline(cin,s1);
    cout<<"Enter string 2:";
    getline(cin,s2);
    int a,b,i,j;
    a=s1.length();
    b=s2.length();
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(s1[i]==s2[j]){
                cout<<s1[i]<<endl;
                break;

            }
        }
    }


    
}