#include <stdio.h>

int main()
{
    unsigned int a, b, c, d;

    a = 5;
    b = 10;
    c = a << 30;
    d = a >> 2;
    // printf("%d\n", ~a);
    // printf("%u\n", ~a);
    // printf("%d\n", c);
    printf("%d\n", d);

    for (int i = 0; i < 1000000000000; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}