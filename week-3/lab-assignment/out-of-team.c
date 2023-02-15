#include <stdio.h>

int main()
{
    int N, K, i, j, out = 0;
    int run[100];

    scanf("%d %d", &N, &K);

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &run[i]);
    }
    for (j = 1; j <= N; j++)
    {
        if (run[j] < K)
        {
            out++;
        }
    }

    printf("%d", out);

    return 0;
}