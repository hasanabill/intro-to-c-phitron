#include <stdio.h>

int main()
{
    int i, co = 5;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            co++;
        }
    }

    printf("total even numbers are %d\n", co);

    return 0;
}