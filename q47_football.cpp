#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string s[n],w;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] != s[0])
        {
            count++;
            w = s[i];
        }
    }
     if (count>n/2.0)
     {
         cout << w;
     }
     else
     {
         cout << s[0];
     }
     
     

    return 0;
}