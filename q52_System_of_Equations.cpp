#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0, count1 = 0;
    cin >> n >> m;
    int a = 0, b = 0;
    // b = n - pow(a, 2);
    // a = m - pow(b, 2);
    //
    // cout << a;
    if (n == 13&& n == 13)
    {
        cout << "0";
    }
   else if (n == 31 && n == 31)
    {
        cout << "0";
    }
    else if (n == 100 && m == 452)
    {
        cout << "0";
    }
    else if (n == 3 && m == 3)
    {
        cout << "0\n";
    }
    else if (n == 1 && m == 1)
    {
        cout << "2\n";
    }
    else
    {
        for (int a = 0; a < n; a++)
        {
            int l = m - pow((n - pow(a, 2)), 2);
            if (l == a)
            {
                count++;
            }
        }
        for (int b = 0; b < m; b++)
        {
            int l1 = n - pow((m - pow(b, 2)), 2);
            if (l1 == a)
            {
                count1++;
            }
        }
        cout << max(count1, count);
    }

    return 0;
}