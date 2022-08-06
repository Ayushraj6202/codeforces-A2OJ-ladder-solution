#include<iostream>

using namespace std;

int main()
{
    long long int a, b, c;
    cin >> a >> b;
    if(a%2 == 0)
    {
        c = a / 2;      //length of odd
    }
    else
    {
        c = (a + 1) / 2;//length of odd
    }
    if (b <= c) // lies in odd ,
    {
        cout << (b * 2) - 1;
    }
    else
    {
        cout << (b - c) * 2;
    }
}