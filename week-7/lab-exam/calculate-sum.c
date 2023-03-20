#include <stdio.h>
int main()
{
    int n, sum = 0, i, c = 0, d;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (c == 3)
            d = 0;
        else if (c == 0)
            d = 1;
        if (d == 1)
        {
            sum += i;
            c++;
        }
        else
        {
            sum -= i;
            c--;
        }
    }
    printf("%d\n", sum);
}