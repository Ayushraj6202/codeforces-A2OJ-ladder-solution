#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vec vector<ll>
#define fo(i, n) for (int i = 0; i < n; i++)
#define rfo(i, n) for (int i = n - 1; i >= 0; i--)

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll n1 = n + 1, n2 = n + 2;
        ll n3 = n1, n4 = n2;
        ll s = 0;
        while (n > 0)
        {
            ll q = n % 10;
            s += q;
            n = n / 10;
        }
        ll s1 = 0;
        while (n1 > 0)
        {
            ll q = n1 % 10;
            s1 += q;
            n1 = n1 / 10;
        }
        if (s % 2 == 0 && s1 % 2 != 0 || s1 % 2 == 0 && s % 2 != 0)
        {
            cout << n3 << endl;
        }
        else
        {
            cout << n4 << endl;
        }
    }
    return 0;
}