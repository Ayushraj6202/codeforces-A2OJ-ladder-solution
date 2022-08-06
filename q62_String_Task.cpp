#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s2;
    cin >> s;
    string ch;
    long long int n = s.length();
    for (long long int i = 0; i < n; i++)
    {
        // ch[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y')
        {
            //  ch[i] =' ';
            continue;
        }
        else
        {
            s2 += ".";
            s2 += tolower(s[i]);
        }
    }
    cout << s2;
    return 0;
}