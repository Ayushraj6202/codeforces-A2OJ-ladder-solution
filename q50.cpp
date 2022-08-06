#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{

    // Your code here
    int t;
    cin >> t;
    int n, k;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        if (n < k)
        {
            cout << "-1\n"; // ceil(float (n)/k)
        }
        else if (k == 1 && n > 1)
        {
            cout << "-1\n";
        }
        else
        {
            for (int o = 1; o <= ceil(float(n) / k); o++)
            {
                if (o <= n / k)
                {
                    for (int j = 1; j <= k; j++)
                    {
                        char ch = 97;
                        cout << (char)(ch + (j + k+1) % 2);
                    }
                }
                else
                { 
                    for (int j = 1; j <= n % k; j++)
                    {
                        char ch = 97;
                        cout << (char)(ch + (j + k+1) % 2);
                    }
                }
            }
            cout << "\n";
        }
    }
    return 0;
}