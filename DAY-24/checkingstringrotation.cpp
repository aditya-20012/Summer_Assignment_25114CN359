#include<iostream>
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

    char c;
    bool x=false;

    if(a==b){

        for(i=0;i<a;i++){

            if(s1==s2){

                cout<<"There is string rotation";
                x=true;
                break;
            }

            c=s1[a-1];

            for(j=a-1;j>0;j--){

                s1[j]=s1[j-1];

            }

            s1[0]=c;
        }

        if(x==false){

            cout<<"No string rotation available";

        }

    }

    else{

        cout<<"No string rotation available";

    }

}