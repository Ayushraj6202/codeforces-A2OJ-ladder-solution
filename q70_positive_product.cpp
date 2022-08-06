#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, count = 0, count1 = 0;
        cin >> n;
        long long int a[n];
        for ( long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
            {
                count++;
            }
            else if (a[i] < 0)
            {
                count1++;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (a[i] * a[j] > 0)
        //         {
        //             count++;
        //         }
        //     }
        // }
         
        long long int p = (count * (count - 1) / 2);
         long long int p1 = (count1 * (count1 - 1) / 2);

        cout << p + p1 << endl;
        // // cout << p << endl
        // //  << p1;
            // cout << count << endl;
        
    }

    return 0;
}