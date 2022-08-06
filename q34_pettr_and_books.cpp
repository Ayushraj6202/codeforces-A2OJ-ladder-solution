#include <iostream>
using namespace std;
int main()
{
    int page, arr[7], i;
    cin >> page;
    for (i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 7; i++)
    {
        page -= arr[i];
        if (page <= 0)
        {
            cout << i + 1 << endl;
            break;
        }
        if (i == 6)
            i = -1;
    }
    return 0;
}
