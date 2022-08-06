#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a=0;
   // cout << "n:";
    cin >> n;
    string s;
    //cout << "s:";
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if(s[i]==s[i+1]){
            a++;
        }
    }
    cout << a;
    return 0;
}