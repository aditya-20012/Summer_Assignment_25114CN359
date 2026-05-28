 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for table:";
    cin>>n;
    int a;
    cout<<"Enter the number till which we have to print:";
    cin>>a;
    for (int i=1;i<=a;i+=1){
        cout<<n<<'x'<<i<<'='<<n*i<<endl;
    }
}