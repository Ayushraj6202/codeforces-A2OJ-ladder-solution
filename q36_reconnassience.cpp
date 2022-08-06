#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 1000, x, y;
    cin >> n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        b[i] = a[i+1] - a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[i] =abs( a[i+1] - a[i]);
    }
     b[n - 1] = abs(a[n - 1] - a[0]);
     for (int i = 0; i <= n-1; i++)
     {
        // cout << b[i] << endl;
        if (b[i]<k)
        {
            k = b[i];
            x = i;
        }
        
     }
    if (x==n-1)
    {
        cout << n << " " << 1;
    }
    else
    {
        cout << x + 1 << " " << x + 2;
    }
    

     return 0;
}