#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, count = 0;
    cin >> k;
    char ch;
    string s;
    cin >> s;
    int n = s.length();
    sort(s.begin(), s.begin() + n);
    for (int i = 0; i < n; i++)
    {
        if (i % k == 0)
        {
            ch = s[i];
        }
        if (s[i] == ch)
        {
            count++;
        }
    }
    if (n == count && count % k == 0)
    {
        for (int i = 0; i < k; i++)
        {
            for (int l = 0; l < s.size(); l += k)
            {
                cout << s[l];
            }
        }
    }
    else
    {
        cout << "-1";
    }
    return 0;
}