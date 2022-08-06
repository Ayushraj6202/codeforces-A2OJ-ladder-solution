#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // cout << "s ";
    cin >> s;
    int n = s.length();
    // char a[n]=s;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            char ch = toupper(s[i]);
            cout << ch;
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}