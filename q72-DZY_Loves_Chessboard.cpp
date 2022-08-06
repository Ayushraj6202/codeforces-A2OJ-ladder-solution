#include <bits/stdc++.h>
int main()
{
    char s[120][120];
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '-')
                printf("-");
            else
            {
                if ((i + j) % 2 == 0)
                    printf("B");
                else
                    printf("W");
            }
        }
        printf("\n");
    }
    return 0;
}