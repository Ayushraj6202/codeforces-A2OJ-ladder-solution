#include <bits/stdc++.h>
using namespace std;
int swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int n;
   // cout << "n:";
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        swap(p[i], p[i + 1]);
        i++;
    }
    if (n % 2 == 1)
    {
        cout << "-1";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << p[i]<<" ";
        }
    }

    return 0;
}