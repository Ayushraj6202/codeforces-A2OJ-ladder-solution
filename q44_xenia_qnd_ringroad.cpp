#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int n, m;
    cin >> n >> m;
   long long  int t[m], k;
    for (long long int i = 0; i < m; i++)
    {
        cin >> t[i];
    }
   long long int sum = t[0],p;
    for (long long int i = 0; i < m - 1; i++)
    {
        p = t[i + 1] - t[i];
        if (t[i + 1] >= t[i])
        {
            sum = sum +p;
        }
        // else if (t[i + 1] == t[i])
        // {
        //     sum = sum;
        // }
        else
        {
            sum = sum + n + p;
        }
    }
    cout << sum-1 << endl;
    return 0;
}