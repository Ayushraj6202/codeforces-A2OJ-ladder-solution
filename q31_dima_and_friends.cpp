#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    long long int sum = 0;
    cin >> n;
    int a[n],c=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    //                      f     n                sum    %       ways
    // int c = sum % (n + 1);// 1     2      1         1      1  1   1 3 5   3 ways    2   4   6
    // cout << n+1 + c;//      2      3    (3,5)       8      2  1    2 3 5  3 ways  10  11   13    (sum+5)%n!=0 count++
    //                      // 3      4    (1,2,3)     6      2  2   1,3,4,5 4 ways   7   9   10   11
  //  cout << sum << " ";
    if (n !=1&&n<=5)
    {
        for (int i = 1; i <= 5; i++)
        {
            if ((sum + i) % (n + 1) != 0)
            {
                count++;
            }
        }

        cout << count;
    }
    else if(n==1)
    {
        for (int i = 1; i <= 5; i++)
        {
           if ((sum + i) % (n + 1) == 0)
            {
                c++;
            }
        }
        cout << c;
    }
    else if (n>5)
    {
        int d = 5;
        for (int  i = 0; i < 5; i++)
        {
            if ((sum + i) % (n + 1) == 0)
            {
                d--;
            }
            
        }
        cout << d;
    }
    
    return 0;
}