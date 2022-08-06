#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i = 0;
    //cout << "enter :";
    cin >> n;
    while (n > 0)
    {
        int a = n % 10;
         n = n / 10;
        if ( a==4||a==7)
        {
            i++;
        }
       
    }
   // cout << i << endl;
    if (i == 4 || i == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}