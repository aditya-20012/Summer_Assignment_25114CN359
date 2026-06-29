#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    cout << "***** Welcome to Menu Driven Array Operations System *****" << endl;
    int arr[50],n,i,choice;
    bool found=true;
    cout<<"Enter no of elements:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    while(true){
        cout << "1.Add element\n2.Display array elements\n3.Search element(Linear search)\n4.Maximum and minimum element\n5.Exit\n";
        cout<<"Enter choice:";
        cin>>choice;
        if(choice==1){
            cout<<"Enter array element to insert at end:";
            cin>>arr[n];
            n=n+1;
        }
        else if(choice==2){
            cout<<"Displaying array elements:";
            for(i=0;i<n;i++){
                cout<<arr[i]<<' '<<endl;
            }
        }
        else if(choice==3){
            int element;
            cout<<"Enter element to search:";
            cin>>element;
            for(i=0;i<n;i++){
                if(arr[i]==element){
                    break;
                }
            }
            if(arr[i]==element){
                cout<<"Element found at"<<i<<"index"<<endl;
            }
            else{
                cout<<"Element not found"<<endl;
            }

        }
        else if(choice==4){
            int maximum=0,minimum=0;
            maximum=arr[0];
            minimum=arr[0];
            for(i=0;i<n;i++){
                maximum=max(maximum,arr[i]);
                minimum=min(minimum,arr[i]);

            }
            cout<<"Maximum element:"<<maximum<<endl;
            cout<<"Minimum element:"<<minimum<<endl;

        }
        else if(choice==5){
            cout<<"Exited Successfully";
            break;
        }
        else{
            cout<<"Invalid option";
            break;
        }
    }
}