#include <stdio.h>

int main()
{
    int i, j, k;
    int mat1[3][3], mat2[3][3];
    int ans[3][3];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat2[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            ans[i][j] = 0;
            for (k = 0; k < 3; k++)
                ans[i][j] += mat1[i][k] * mat2[k][j];
        }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}