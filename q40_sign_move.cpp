#include <iostream>
using namespace std;
// //Test case 1: Initially, Chef is at coordinate 0 on X-axis.
// As 0 is non-negative, during the first operation Chef moves 1 step backward and reaches the coordinate −1.

// Test case 2: Chef is at coordinate −1 on X-axis after the first operation.
// As −1 is negative, during the second operation Chef moves 2 steps forward and reaches the coordinate 1.
int main()
{
    // your code goes here
    int t;
    scanf("%d",&t);
    int x , result;
    while (t--)
    {
        int n,x=0;
        scanf("%d", &n);
        
        for (int i = 1; i <= n; i++)
        {
            if (x >= 0)
            {
                result = x - i;
                x = x - i;
            }
            else if (x < 0)
            {
                result = x + i;
                x = x + i;
            }
           
       }

       printf("%d\n", result);
       // cout << result << endl;
    }
    return 0;
}
