#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, r, b;
        scanf("%d%d%d", &n, &r, &b);
        int k = r / (b + 1);
        int sum = r % (b + 1);
        while (r)
        {
            int integer = k + (sum > 0);
            sum = max(0, sum - 1);
            r -= integer;
            while (integer--)
                printf("R");
            if (b > 0)
            {
                printf("B");
                --b;
            }
        }
        puts("");
    }
    return 0;
}