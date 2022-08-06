#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int l = s.length();
        for (int j = 0; j < l; j++)
        {
            if (l>10)
            {
                 c = l - 2; 
            }
             
            
        }
        
        if (l>10)
        {
            cout << s[0] << c << s[l - 1]<<endl;
        }
        else
        {
            cout << s << endl;
        }
        
    }
    
    return 0;
}