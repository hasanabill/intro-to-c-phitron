#include <stdio.h>
#include <math.h>

int factorial(int x);

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int perm, comb;
    perm = factorial(n) / factorial(n - r);
    comb = factorial(n) / (factorial(n - r) * factorial(r));

    printf("nPr = %d\n", perm);
    printf("nCr = %d\n", comb);
    return 0;
}

int factorial(int x)
{
    int i, res = 1;
    for (i = 1; i <= x; i++)
        res *= i;
    return res;
}