#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[1000], y[1000], n, i, j, Count = 0;
    bool up[200], low[200], left[200], right[200];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (x[i] == x[j] && y[i] < y[j])
                up[i] = true;
            else if (x[i] == x[j] && y[i] > y[j])
                low[i] = true;
            else if (x[i] > x[j] && y[i] == y[j])
                left[i] = true;
            else if (x[i] < x[j] && y[i] == y[j])
                right[i] = true;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (low[i] == true && up[i] == true && right[i] == true && left[i] == true)
            Count++;
    }
    cout << Count;
    return 0;
}