#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5] ;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 1; j++)
        {
          //  cout << "Enter ";
            cin >> a[i][j] >> a[i][j + 1] >> a[i][j + 2] >> a[i][j + 3] >> a[i][j + 4];
        }
    }

    if (a[1][2] == 1 || a[2][1] == 1   || a[2][3] == 1 || a[3][2] == 1)
    {
        cout << "1\n";
    }
    else if (a[1][0] == 1 || a[0][1] == 1 || a[0][3] == 1 || a[1][4] == 1 || a[3][0] == 1 || a[3][4] == 1 || a[4][1] == 1 || a[4][3] == 1)
    {
        cout << "3\n";
    }
    else if (a[0][2] == 1 || a[1][1] == 1 || a[1][3] == 1 || a[2][0] == 1 || a[2][4] == 1 || a[3][1] == 1 || a[3][3] == 1 || a[4][2] == 1)
    {
        cout << "2\n";
    }
    else if (a[2][2]==1)
    {
        cout << "0\n";
    }
    
    else
    {
        cout << "4\n";
    }
    
    
     
    return 0;
}