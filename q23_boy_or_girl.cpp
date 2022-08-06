#include<bits/stdc++.h>
using namespace std;

int main(){
    // if no of distint character is odd -->male; otherwise-->female;
    //                                 IGNORE HIM!      CHAT WITH HER!
    string s;
    cin >> s;
    char k;
    int n = s.length();
    int  c = n;
     //cout << c;
     for (int i = 0; i < n; i++)
     {
        // k = s[i];
         for (int j = i+1; j <= n; j++)
         {
             if (s[j]==s[i])
             {
                 --c;
                 break;
             }
         }
         
     }
     //cout << c << endl;
    if(  (c)%2==0)//female zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
    {
        cout << "CHAT WITH HER!";
    }
    else//male
    {
        cout << "IGNORE HIM!";
    }
    
    return 0;
}