#include <stdio.h>

int main()
{
    int x, y;
    int *ptrX = &x, *ptrY = &y;
    scanf("%d %d", &x, &y);
    printf("%d %d\n", *ptrX, *ptrY);
    return 0;
}