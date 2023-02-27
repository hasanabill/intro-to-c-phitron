#include <stdio.h>

int gcd(int a, int b)
{
    int i;
    for (i = a; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a, b, ans;
    scanf("%d%d", &a, &b);

    ans = gcd(a, b);

    printf("%d\n", ans);
    return 0;
}