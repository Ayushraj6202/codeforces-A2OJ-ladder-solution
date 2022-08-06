#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{

    // Your code here
    int n, m,r=0;
    cin >> n >> m;
    int w[m];
    int k = n - m + 1, mul;
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    qsort(w, m, sizeof(int), compare);
    mul = w[m - 1] * w[m - 2];
    for (int i = 0; i < m-2; i++)
    {
        r += w[i] * w[i + 1];
    }
    int ans = mul * k + r;
    cout << ans << endl;

    return 0;
}
