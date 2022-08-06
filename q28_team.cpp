#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,suma=0 ;
   // cout << "n:";
    cin >>n ;
    int sum[n];
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
       // cout << "enter:";
        cin >> a[i] >> b[i] >> c[i];
        // suma += a[i];
        // sumb += b[i];
        // sumc += c[i];
        sum[i] = a[i] + b[i] + c[i];
        if (sum[i]>=2)
        {
            suma++;
        }
        
    }
    cout << suma;
    return 0;
}