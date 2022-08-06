#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        cin >> n;
        int f[n];
        for (int i = 2; i <= n; i++)
        {
            f[1] = 1;
            f[i] = f[i-1]| i;
            //f[i - 1] |= i - 1;
            if (f[i]==f[i-1])
            {
                count++;
            }
            
        }
        cout << count << endl;
    }
    
    return 0;
}