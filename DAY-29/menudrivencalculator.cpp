#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int choice;
    cout<<"****Welcome to Menu driven calculator"<<endl;
    while(true){
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power\n6.Factorial\n";
        cout<<"Enter choice:";
        cin>>choice;
        int a,b;
        if(choice==1){
            cout<<"Enter 1st Number:";
            cin>>a;
            cout<<"Enter 2nd Number:";
            cin>>b;
            int sum;
            sum=a+b;
            cout<<"Sum of two numbers:"<<sum<<endl;


        }
        else if(choice==2){
            cout<<"Enter 1st Number:";
            cin>>a;
            cout<<"Enter 2nd Number:";
            cin>>b;
            int diff;
            diff=a-b;
            cout<<"Differnce of two numbers:"<<diff<<endl;


        }
        else if(choice==3){
            cout<<"Enter 1st Number:";
            cin>>a;
            cout<<"Enter 2nd Number:";
            cin>>b;
            int prod;
            prod=a*b;
            cout<<"Product of two numbers:"<<prod<<endl;
        }
        else if(choice==4){
            float a,b;
            cout<<"Enter 1st Number:";
            cin>>a;
            cout<<"Enter 2nd Number:";
            cin>>b;
            float div;
            div=a/b;
            cout<<"Division of two numbers:"<<div<<endl;
        }
        else if(choice==5){
            int base,exponent,power;
            cout<<"Enter base";
            cin>>base;
            cout<<"Enter exponent";
            cin>>exponent;
            power=pow(base,exponent);
            cout<<"Power:"<<power<<endl;

        }
        else if(choice==6){
            int n,fac=1,i;
            cout<<"Enter number for factorial:";
            cin>>n;
            for(i=1;i<=n;i++){
                fac=fac*i;
            }
            cout<<"Factorial of number:"<<fac<<endl;

        }
        else{
            cout<<"Invalid option";
            break;
        }


    }

}
