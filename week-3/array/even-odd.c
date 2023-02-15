#include <stdio.h>

int main()
{
    int N = 6;
    int arr[N];
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int e_c = 0, o_c = 0;

    for (i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            e_c++;
        }
        else
        {
            o_c++;
        }
    }
    printf("even is %d and odd is %d", e_c, o_c);

    return 0;
}