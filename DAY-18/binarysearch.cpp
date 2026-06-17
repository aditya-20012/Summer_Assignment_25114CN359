#include <iostream>
using namespace std;
int main()
{
    int n, key,arr[50];
    cout << "Enter no  of elements array: ";
    cin >> n;
    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int mid;
    bool found = false;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(arr[mid] == key)
        {
            cout << "Element found at index " << mid;
            found = true;
            break;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if(!found)
    {
        cout << "Element not found";
    }

    return 0;
}