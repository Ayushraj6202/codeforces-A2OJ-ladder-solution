#include <bits/stdc++.h>
using namespace std;
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];

    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    // Sorting the pair array.
    sort(pairt, pairt + n);

    // Modifying original arrays
    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int main()
{
    int n, s, k = 0, count = 0;
    cin >> s >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    pairsort(x, y, n);
    for (int i = 0; i < n; i++)
    {
        if (s <= x[i])
        {
            count++;
        }
        else
        {
            s += y[i];
            k = 2;
        }
    }
    if (count != 0)
    {
        cout << "NO\n";
    }
    else if (k == 2)
    {
        cout << "YES\n";
    }
    return 0;
}