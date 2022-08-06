#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float sum=0;
   // cout << "n:";
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
      //  cout << "p[n]:";
        cin >> p[i];
        sum += p[i] ;
    }
    cout << float(sum) / n;
    return 0;
}