#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            if (s[i]=='+'&&s[i+1]=='+')
            {
                x = x + 1;
            }
            else if (s[i]=='-'&&s[i+1]=='-')
            {
                x = x - 1;
            }
            
        }
        
    }
    cout << x;
    return 0;
}