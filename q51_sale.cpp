#include <bits/stdc++.h>
using namespace std;
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    qsort(a, n, sizeof(int), compare);
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            sum += a[i];
        }
    }

    cout << -(sum);

    return 0;
}