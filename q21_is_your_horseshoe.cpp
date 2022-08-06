#include<bits/stdc++.h>
using namespace std;

int main(){
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    if ( (s1==s2)&&(s3==s4)&&(s2==s3)&&(s1==s3)&&(s1==s4)&&(s2==s4))
    {
        cout << 3;
    }
    else if ((s1!=s2)&&(s3!=s4)&&(s2!=s3)&&(s1!=s3)&&(s1!=s4)&&(s2!=s4) )
    {
        cout << 0;
    }//          1                                4                              2                                3                             5
    else if(((s1==s2)&&(s4!=s3)&&(s1!=s4)&&(s1!=s3))||((s2==s3)&&(s1!=s4)&&(s3!=s4)&&(s3!=s1))||((s1==s3)&&(s4!=s2)&&(s3!=s4)&&(s3!=s2))||((s1==s4)&&(s2!=s3)&&(s1!=s3)&&(s1!=s2))||((s2==s4)&&(s1!=s3)&&(s2!=s3)&&(s2!=s1))||((s3==s4)&&(s1!=s2)&&(s1!=s3)&&(s3!=s2)))
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }
    
    return 0;
}