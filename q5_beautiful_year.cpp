#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, a, b, c, d, ans;
   // cout << "enter the value of y ";
    cin >> y;

    while (1)
    {
        y++;
        ans = y;
        a = y % 10;
        y = y / 10;
        b = y % 10;
        y = y / 10;
        c = y % 10;
        y = y / 10;
        d = y % 10;
        // y = 1000 * d + 100 * c + 10 * b + a;
        if (a != b && b != c && c != d && a != c && b != d && a != d)
        {
            cout << ans<< endl;
            break;
        }
        y = ans;
    }

    return 0;
}