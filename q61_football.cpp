#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == s[i + 1]) &&(s[i+1]==s[i+2])&& (s[i + 2] == s[i + 3]) &&(s[i+3]==s[i+4])&& (s[i + 4] == s[i + 5]) && (s[i + 6] == s[i])&&(s[i+5]==s[i+6]))
        {
            count++;
        }
    }
    if (s.length() <= 6)
    {
        cout << "NO\n";
    }
    else if (count >= 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}