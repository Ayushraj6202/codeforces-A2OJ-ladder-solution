#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (i != 0)
            {
                cout << " ";
            }
            i = i + 2;
        }
        else
        {
            cout << s[i];
        }
        // cout << a[i] ;
    }
    // for (int i = 0; i < a.length(); i++)
    // {
    //     cout << a[i] << "s";
    // }

    return 0;
}