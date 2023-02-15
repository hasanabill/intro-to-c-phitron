#include <stdio.h>

int main()
{
    int row, col;

    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (row == col)
    {
        int ans = 1, x = arr[0][0];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    // special check for scalar
                    if (arr[i][j] != x)
                    {
                        ans = 0;
                    }
                    continue;
                }
                if (arr[i][j] != 0)
                {
                    ans = 0;
                }
            }
        }
        if (ans == 1)
        {
            printf("Scalar\n");
        }
        else
        {
            printf("not Scalar\n");
        }
    }
    else
    {
        printf("not Scalar\n");
    }

    return 0;
}