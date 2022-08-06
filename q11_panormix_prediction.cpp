#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, prime=0 ; // m=n++;unitl m is prime;m>n;
   // cout << "n and m:";
    cin >> n >> m;
    int mas[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int i = 0; i < 15; i++)
    {
        if (n == mas[i] && m == mas[i + 1])
        {
            prime++;
            break;
        }
    }

    if (prime == 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    return 0;
}