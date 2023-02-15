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

    int m = arr[0];
    for (i = 0; i < N; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }
    printf("max value is %d", m);
    return 0;
}