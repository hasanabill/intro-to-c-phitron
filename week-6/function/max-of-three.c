#include <stdio.h>
int maxOfThree(int x, int y, int z);
int main()
{
    int a, b, c, i = 0, m;

    while (i < 3)
    {
        scanf("%d%d%d", &a, &b, &c);
        m = maxOfThree(a, b, c);
        printf("%d\n", m);
        i++;
    }

    return 0;
}

int maxOfThree(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > z && y > z)
        return y;
    else
        return z;
}