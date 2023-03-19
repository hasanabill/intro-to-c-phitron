#include <stdio.h>
int main()
{
    int a = 13;
    int *p;
    int *q;
    p = &a;
    q = p;
    *q = 7;

    printf("%p\n", p);
    printf("%d\n", a);
    return 0;
}