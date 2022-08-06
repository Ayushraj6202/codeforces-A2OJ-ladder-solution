#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vashya -->1 to n, petya --> n to 1  ,sasha --> both are same;
    long long int n, suma = 0, sumb = 0;
    cin >> n;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
          cin >> a[i];
    }
    long long int l;
    cin >> l;
    long long int b[l];
    for (long long int i = 0; i < l; i++)
    {
        cin >> b[i];
        for (long long int j = 0; j < n; j++)
        {
            if (a[j] == b[i])
            {
                suma += j + 1;
                sumb += n - j;
            }
        }
    }
    cout << suma << " " << sumb;
    return 0;
}