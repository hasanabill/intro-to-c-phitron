#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("%d\n", a);
    printf("%p\n", p);
    int **q = &p;
    printf("%p\n", q);

    **q = 123;

    printf("%d\n", a);
    return 0;
}