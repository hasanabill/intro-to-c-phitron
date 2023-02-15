#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, i, count = 0;
    scanf("%d", &N);
    char str[N];
    scanf("%s", &str);

    for (i = 0; i < N; i++)
    {
        if (str[i] == '+')
            count++;
    }
    printf("%d\n", count);

    return 0;
}
