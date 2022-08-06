#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    int count;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i];
    // }
    
    for (int i = 0; i < n; i++)
    {
        count = 0;
        if ((s[i]>='!'&&s[i]<='~'&&s[i]=='H')||(s[i]>='!'&&s[i]<='~'&&s[i]=='Q')||(s[i]>='!'&&s[i]<='~'&&s[i]=='9'))
        {
            ++count;
            break;
        }
        
        
        else
        {
            count = 0;
        }
        
    }
    if (count!=0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    // ||(s[i]>='!'&&s[i]<='~'&&s[i]=='+')
    return 0;
}