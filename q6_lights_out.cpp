#include <bits\stdc++.h>
using namespace std;



void fun(int i, int j,int result[3][3])
{
    if (i >= 0 && i <= 2 && j >= 0 && j <= 2)
    {
        if (result[i][j] == 0)
        {
            result[i][j] = 1;
        }
        else if (result[i][j] == 1)
        {
            result[i][j] = 0;
        }
    }
}


int main()
{
    int input[3][3];
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 1;
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           // cout << "enter: ";
            cin >> input[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (input[i][j] % 2 == 1)
            {
                fun(i, j,result);
                fun(i + 1, j,result);
                fun(i - 1, j,result);
                fun(i, j + 1,result);
                fun(i, j - 1,result);
            }
        }
    }
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}