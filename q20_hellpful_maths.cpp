#include <bits/stdc++.h>
using namespace std;
int fun(const void *pa, const void *pb)
{
    return (*(int *)pa - *(int *)pb);
}
char swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    string s;
    cin >> s;
    char t;
    int n = s.length();
    int sn[(n+1) / 2 ];
    for (int i = 0; i < n; i = i + 2)
    {
        int j = i / 2;
        sn[j] = s[i]-48;
    }
    // for (int i = 0; i < (n + 1) / 2; i = i + 1)
    // {
    //     cout << sn[i] << endl;
    // }
    qsort(sn, n/2+1 , sizeof(int), fun);
    for (int i = 0; i < (n+1)/2; i++)
    {
        cout << sn[i];
        if (i<n/2)
        {
            cout << "+";
        }
              
    }

    // cout << s;
    return 0;
}