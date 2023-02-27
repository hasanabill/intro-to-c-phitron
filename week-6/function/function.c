#include <stdio.h>

int sum(int x, int y)
{
    printf("adding num %d and %d\n", x, y);
    return x + y;
}

int main()
{
    int a, b;
    a = sum(4, 9);
    printf("a = %d\n", a);
    b = sum(60, 9);
    printf("b = %d\n", b);
    return 0;
}
