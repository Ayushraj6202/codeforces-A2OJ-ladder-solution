#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k ;
    string n, m;
    cin >> n;
    cin >> m;
    int l = n.length();
    char s1[l], s2[l], r, e;
    for (int i = 0; i < l; i++)
    {
        s1[i] = n[i];
        s2[i] = m[i];
    }
    for (int i = 0; i < l; i++)
    {
        r = toupper(s1[i]);
        s1[i] = r;
        e = toupper(s2[i]);
        s2[i] = e;
    }

    // for (int i = 0; i < l; i++)
    // {
    //     cout << s1[i];
    // }
    //  for (int i = 0; i < l; i++)
    // {
    //     cout << s2[i];
    // }
   k=  strncmp(s1, s2,l);
    if (k>0)
    {
        cout << "1";
    }
    else if (k<0)
    {
        cout << "-1";
    }
    else
    {
        cout << "0";
    }
    

    return 0;
}