 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     string a;
    // cout << "enter a:";
     cin >> a;
     string b;
   //  cout << "enter b:";
     cin >> b;
     int n = a.length();
     for (int i = 0; i < n; i++)
     {
         int p;
         p = a[i] ^ b[i];

         cout << p;
     }
     

     return 0;
 }