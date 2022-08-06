#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sumb = 0, suma = 0;
    cin >> n;
    int a[n], b[n], pass[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        sumb += b[i];
        suma += a[i];

        pass[i] = sumb - suma;

        if (k < pass[i])
        {
            k = pass[i];
        }
    }
    cout << k;

    return 0;
}