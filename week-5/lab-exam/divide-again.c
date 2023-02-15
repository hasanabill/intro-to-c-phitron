#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N % 3 == 0)
    {
        printf("%d\n", N / 3);
    }
    else
    {
        printf("%d\n", -1);
    }

    return 0;
}