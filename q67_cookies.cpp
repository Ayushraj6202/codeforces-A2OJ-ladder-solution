#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,add=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]%2==0)
        {
            count++;
        }
        else
        {
            add++;
        }
    }
    if (n==1)
    {
        cout << "1\n";
    }
    else if(add%2!=0)
    {
        cout << add;
    }
    else  
    {
        cout << count;
    }
    
    
    return 0;
}