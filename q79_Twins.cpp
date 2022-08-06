#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int t,p, sum = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    t = sum  / 2;
    sort(a, a + n,greater<int>());
    for (int i = 0; i <n; i++)
    {
        sum1 += a[i];
        if (sum1>t)
        {
            p = i + 1;
            break;
        }
        
    }
    cout << p << endl;
    // cout << sum << " " << sum1;
    return 0;
}