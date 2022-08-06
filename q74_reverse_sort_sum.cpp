#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        ll add = 0;
        for (auto &x : a)
        {
            cin >> x;
            add += x;
        }
        int count = add / n;
        vector<int> check(n);
        int cur = 0;
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; --i)
        {
            cur -= check[i];
            if (count)
            {
                ++cur;
                if (i - count >= 0)
                    ++check[i - count];
            }
            a[i] -= cur;
            if (a[i] == i && count)
            {
                ans[i] = 1;
                --count;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            cout << ans[i];
            cout << " ";
        }
        cout << endl;
    }
}