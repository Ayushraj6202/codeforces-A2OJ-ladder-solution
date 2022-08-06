#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        s1 += temp1;
        s2 += temp2;

    }
    cout << min(s1, (n - s1)) + min(s2, (n - s2));
    return 0;
}