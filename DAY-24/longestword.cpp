#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s,s1;
    cout<<"Enter the string";
    getline(cin,s);
    int a,i,c;
    a=s.length();
    c=0;
    int max=0;
    string max_word;
    for(i=0;i<a;i++){
        if(!isspace(s[i])){
            s1+=s[i];
        }
        else{
            c=s1.length();
            if(c>max){
                max=c;
                max_word=s1;
                
            }
             s1="";
             

         
        }
       
           
    }
    c=s1.length();
    if(c>max){
        max=c;
        max_word=s1;
    }
    cout<<max_word;
    

}
