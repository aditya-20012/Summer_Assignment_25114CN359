#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin,s);
    int vowels=0,consonants=0,i;
    int a=s.length();
    for(i=0;i<a;i++){
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')){
            vowels+=1;
        }
        else if(isalpha(s[i])){
            consonants+=1;
        }
    }
    cout<<"No of vowels:"<<vowels<<endl;
     cout<<"No of consonants:"<<consonants;
    

}