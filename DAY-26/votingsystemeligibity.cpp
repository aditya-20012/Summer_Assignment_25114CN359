#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the citizenship:";
    getline(cin,s);
    int age;
    bool x=true;
    if(s=="India"){
        x=true;
        cout<<"Enter age:";
        cin>>age;
        if(age>=18){
            cout<<"Allowed to vote";
        }
        else{
            cout<<"Not allowed to vote";
        }
    }
    else{
        x=false;
        cout<<"You are not allowed to vote";
    }
}