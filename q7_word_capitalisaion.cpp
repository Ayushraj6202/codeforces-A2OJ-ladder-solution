#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, sum = 0;
    string s;
    //  cout << "enter s ";
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            sum++;
        }
    }
    // cout << count << endl
    //      << sum << endl;
    char ch, ph;
    if (sum >= count)
    {
        for (int j = 0; j < n; j++)
        {
            ch = tolower(s[j]);
            cout << ch;
        }
    }
    else
    {
        for (int k = 0; k < n; k++)
        {
            ph = toupper(s[k]);
            cout << ph;
        }
    }
    return 0;
}