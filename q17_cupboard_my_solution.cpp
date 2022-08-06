#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 0, c = 0, d = 0, t, t1;
    // cout << "enter :";
    cin >> n;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
    {
        // cout << "elr:";
        cin >> l[i] >> r[i];
        if (l[i] == 1)
        {
            a++; // open left
        }
        if (r[i] == 1)
        {
            c++; // open right
        }
    }
    b = n - a; // close left
    d = n - c; // close right
    // for left;
    if ((a == n) && (c == n))
    {
        t = 0;
    }
    else if (b == n && d == n)
    {
        t = 0;
    }
    else if (a==b&&c>d)
    {
        t = a + d;
    }
    else if (a==b&&c<d)
    {
        t = a + c;
    }
    else if (c==d&&a>b)
    {
        t = c + b;
    }
    else if (c==d&&a<b)
    {
        t = c + a;
    }
    
    else if (a==c&&b==d)
    {
        t = min(a, b) + min(c, d);
    }
    
    else if (b > a && c > d) // for left close>open ,for right open>close
    {
        for (int i = 0; i < n; i++)
        {
            l[i] = 0; // close
            r[i] = 1; // open
        }
        t = a + d;
    }
    else if (b > a && c < d) // for left close>open ,for right open<close
    {
        if (b > d) // left close
        {
            for (int i = 0; i < n; i++)
            {
                l[i] = 0; // close
                r[i] = 1; // open
            }
            t = a + c;
        }
        else // right close
        {
            for (int i = 0; i < n; i++)
            {
                l[i] = 1; // close
                r[i] = 0; // open
            }
            t = a + c;
        }

    }                        // left close case completed
    else if (a > b && c < d) // for left close<open ,for right open<close
    {
        for (int i = 0; i < n; i++)
        {
            l[i] = 1; // open
            r[i] = 0; // close
        }
        t = b + c;
    }
    else if (a > b && c > d) // for left close<open ,for right open>close// a wants to open and c wants to open
    {
        if (a > c) // left open
        {
            for (int i = 0; i < n; i++)
            {
                l[i] = 1; // open
                r[i] = 0; // close
            }
            t = b + d;
        }
        else // right open a<c;
        {
            for (int i = 0; i < n; i++)
            {
                l[i] = 0; // close
                r[i] = 1; // open
            }
            t = b + d;
        }
    }

    cout << t;
    return 0;
}