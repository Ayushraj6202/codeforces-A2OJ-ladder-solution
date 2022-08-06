#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s2 = 3, s = 1000, m, count = 0;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];

    } //          4,5,6,7,8,9,10,11,12,12
    sort(a, a + m);

    int least = a[n - 1] - a[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (a[i + n - 1] - a[i] < least)
        {
            least = a[i + n - 1] - a[i];
        }
    }
    cout << least << endl;

    return 0;
}