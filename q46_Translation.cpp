#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    string t;
    cin >> t;
    int n = s.length();
    int j = n - 1;
    for (int i = 0; i < n; i++, j--)
    {
         if ( s[i]==t[j])
         {
             count++;
         }
         
     }
     
    if (count!=n)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}