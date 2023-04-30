#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        // line suru
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        //  line sesh

        if (i <= n - 1) // n tomo line ar aga
        {
            s--;
            k = k + 2;
        }
        else // n tomo line ar pora
        {
            s++;
            k = k - 2;
        }

        printf("\n");
    }
    return 0;
}