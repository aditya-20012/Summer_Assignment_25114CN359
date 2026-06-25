#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s[100];
    int n, c, i, j = 0;
    cout << "Enter no of words:";
    cin >> n;
    cout << "Enter words:";
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (s[i].length() == s[i + 1].length())
            {
            }
            else if (s[i].length() > s[i + 1].length())
            {
                swap(s[i], s[i + 1]);
            }
        }
    }

    cout << "After sorting:";
    for (i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
}