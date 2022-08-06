#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    string check = "hello";
    int common = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == check[common])
        {
            common++;
        }
    }
    if (common == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}