#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,l=0,min=0;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12,greater<int> ());
    for (int i = 0; i < 12; i++)
    {
        l = l + a[i];
        if ( l<k)
        {
            min = i + 1;
        }
        
    }
    if (min+1>12)
    {
        cout << 12 - min - 1 << endl;
    }
    else{
    if(k!=0)
    cout << min+1 << endl;
    else
    {
        cout << "0\n";
    }}
    
    return 0;
}