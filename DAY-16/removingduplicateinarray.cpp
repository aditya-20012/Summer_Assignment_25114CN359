#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[50], n, i, c = 0, j,b[50],d=0;
    bool x = false;

    cout << "Enter no of elements:";
    cin >> n;
    cout << "Enter array elements:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        c = count(a, a + n, a[i]);
        if ((c <= 1)||(find(a, a + n, a[i]) == a + i))
        {  b[d]=a[i];
            d+=1;
            
        }
        if(c>1){
            x=true;
        }
    }
    if(x==false){
        cout<<"No duplicate element";
    }
    else{
        cout<<"Array after removing duplicate:";
        for(i=0;i<d;i++){
            cout<<b[i]<<endl;
        }
    }
    
}
