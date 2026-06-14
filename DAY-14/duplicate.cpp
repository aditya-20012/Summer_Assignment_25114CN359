#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[50], n, i, c = 0, j;
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
        if ((c > 1) && (find(a, a + n, a[i]) == a + i))
        {
            cout << "Duplicate element is:" << a[i] << endl;
            x = true;
        }
        
           
        
    }
    if(x==false){
        cout<<"No duplicate element";
    }
}
