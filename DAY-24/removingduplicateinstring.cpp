#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    string s,s1;
    cout<<"Enter string:";
    getline(cin,s);
    int a=s.length();
    int i,j,c=0;
    
    for(i=0;i<a;i++){
        c=count(s.begin(),s.end(),s[i]);
        if(c==1){
           cout<<s[i];  

        }
        else{
            if(s.find(s[i])!=i){

        
            }
            else{
                cout<<s[i];
            }
        }


   
    }
}