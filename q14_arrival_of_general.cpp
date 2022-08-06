#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 101, mini, p = 0, maxi;
  //  cout << "n:";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
       // cout << "a[" << i << "]:";
        cin >> a[i];
        if (k >= a[i]) // minimum
        {
            k = a[i];
            mini = i;
        }
        if (p < a[i]) // maximum
        {
            p = a[i];
            maxi = i;
        }
    }
    if (maxi > mini)
    {
        mini++;
    }
    cout << (maxi + (n - 1) - mini);

    return 0;
}