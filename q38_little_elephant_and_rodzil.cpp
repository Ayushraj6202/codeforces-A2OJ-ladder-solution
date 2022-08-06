#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,p, k = 0, l = 1000000001,count;
    cin >> n;
   long long  int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i]; 
        if (a[i]<l)
        {
            l = a[i];
            p = i;
            count = 1;
        }
        else if (a[i]==l)
        {
            count++;
        }
        
 

    }
     
     

    if (count == 1)
    {
         cout << p ;                          
    }
    else
    {
         cout << "Still Rozdil";
    }

    return 0;
}