#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count=0, n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            count++;
        }
        else
            count = 0;
    }
    if (count == 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}