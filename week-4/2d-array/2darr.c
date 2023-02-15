#include <stdio.h>

int main()
{
    int arr[5][4];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }

    printf("------- Result -------\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}