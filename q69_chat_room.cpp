#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    int count = 0;
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'h')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'e')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'l')
                        {
                            for (int p = k + 1; p < n; p++)
                            {
                                if (s[p] == 'l')
                                {
                                    for (int l = p + 1; l < n; l++)
                                    {
                                        if (s[l] == 'o')
                                        {
                                            count = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (count == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}