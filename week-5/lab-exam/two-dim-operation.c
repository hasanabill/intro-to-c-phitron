#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M, i, j;
    scanf("%d%d", &N, &M);
    int Arr[N][M];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if ((i + 1) == Arr[i][j] && (j + 1) == Arr[i][j])
            {
                Arr[i][j] += 3;
            }
            else if ((i + 1) == Arr[i][j])
            {
                Arr[i][j] += 2;
            }
            else if ((j + 1) == Arr[i][j])
            {
                Arr[i][j] += 1;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
