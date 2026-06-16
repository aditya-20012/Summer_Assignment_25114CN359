#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int ar[50], n, i, c, max = 0, j;
    cout << "Enter number of elements:";
    cin >> n;
    cout << "Enter array elements:";
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int max_element;
    for (i = 0; i < n; i++)
    {
        c = 1;
        for (j = i + 1; j < n; j++)
        {

            if (ar[i] == ar[j])
            {
                c += 1;
            }

        if ((c > max))
            {
            max = c;
            max_element = ar[i];
            }
        }
    }
    cout << "Maximum frequency element: " << max_element;

    return 0;
}
