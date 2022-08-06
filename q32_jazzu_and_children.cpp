#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,last;
    cin >> n >> m;
    double a, k = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (k <= ceil(a / m))
        {
            k = ceil(a / m);
            last = i;
        }
    }
    cout << last<<endl;

    return 0;
}