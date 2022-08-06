#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int count=0,n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
             for (int j = 0; j < n; j++)
             {
                  if ((a[i]^a[j])<(a[i]&a[j]))
                  {
                      count++;
                  }
                  
             }
             
            
        }
        cout << count << endl;
    }
    
    return 0;
}