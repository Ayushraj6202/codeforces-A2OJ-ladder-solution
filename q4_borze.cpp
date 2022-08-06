#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int s,b,c;
  //  cout << "Enter symbol";
    cin >> a;
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i]=='-'&&a[i+1]=='.')
        {
           // s = 1;
           cout << 1;
           i++;
        }
        else if(a[i]=='.')
        {
            //b = 0;
            cout << 0;
        }
        else
        {
            cout << 2; //  c = 2;

            i++;
        }
        
    }
     
    
    return 0;
}