#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int cmpfunc(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}
int cmpfunc1(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

int main()
{
    string s1, s2, s3, s4;
    cin >> s1;
    int n1 = s1.length();

    cin >> s2;
    int n2 = s2.length();
    char a2[n2];
    char a1[n1 + n2];
    cin >> s3;
    int k=0;
    int n3 = s3.length();
    char a3[n3];
    char a[n1];
    for (int i = 0; i < n1; i++)
    {
        a[i] = s1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = s2[i];
    }
    for (int i = 0; i < n3; i++)
    {
        a3[i] = s3[i];
    }
    qsort(a3, n3, sizeof(char), cmpfunc);
    // strcat(a1, a);
    // strcat(a1, a2);
    for (int i = 0; i < n1; i++)
    {
        a1[i] = a[i];
    }
    for (int i = n1; i < n1 + n2; i++)
    {
        a1[i] = a2[i - n1];
    }

    //

    // for (int i = 0; i < n1 + n2; i++)
    // {
    //     a1[i] = s4[i];
    // }
    qsort(a1, n1 + n2, sizeof(char), cmpfunc1);
    // for (int i = 0; i < n1 + n2; i++)
    // {
    //     cout << a1[i];
    // }
    // cout << endl;
    // for (int i = 0; i < n3; i++)
    // {
    //     cout << a3[i];
    // }
    if (n3 == n1 + n2)
    {
        for (int i = 0; i < n3; i++)
        {
            if (a3[i] == a1[i])
            {
                k++;
            }
            else
            {
                k = 0;
            }
        }
        // cout << " " << k;
        if (k == n3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        cout << "NO\n";
    }

    //  k= strcmp(a3, a1);
    // 

    return 0;
}