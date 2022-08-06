#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int s, b, c, count = 0;
    //  cout << "Enter symbol";
    cin >> a;
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' && a[i + 1] == '4' && a[i + 2] == '4')
        {
            //cout << i;
            i = i + 2;
        }
        else if (a[i] == '1' && a[i + 1] == '4')
        {
            i++;
        }
        else if (a[i] == '1')
        {
        }
        else
        {
            // cout << i << endl;
            count = 90;
        }
    }
    if (count == 90)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}