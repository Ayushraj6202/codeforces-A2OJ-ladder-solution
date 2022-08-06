#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m, k, l = 0;
    cin >> m;
    int b[m], count = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                k = b[j] / a[i];
                if (l < k)
                {
                    l = k;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j]%a[i]==0)
            {
                if (b[j]/a[i]==l)
                {
                    count++;
                }
                
            }
            
        }
    }
    cout  << count;
    return 0;
}