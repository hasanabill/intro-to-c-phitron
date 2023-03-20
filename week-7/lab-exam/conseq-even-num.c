#include <stdio.h>
void printConsecEven(int n)
{
    int first = (n / 4) - 3;
    printf("%d", first);
    for (int i = 0; i < 3; i++)
    {
        printf(" %d", first += 2);
    }
    printf("\n");
}
int main()
{
    int t, n, i = 0;
    scanf("%d", &t);
    while (i < t)
    {
        scanf("%d", &n);
        printConsecEven(n);
        i++;
    }
    return 0;
}