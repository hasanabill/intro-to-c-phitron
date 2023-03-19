#include <stdio.h>
void printHash(int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("#");
    printf("\n");
}
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
        printHash(i);

    return 0;
}