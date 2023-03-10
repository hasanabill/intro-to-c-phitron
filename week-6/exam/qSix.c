#include <stdio.h>
int facto(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}
float factRatio(int a, int b)
{
    int factA = facto(a);
    int factB = facto(b);
    return factA / factB;
}
int main()
{
    int a, b;
    float ans;
    scanf("%d%d", &a, &b);
    ans = ratio(a, b);
    printf("%f\n", ans);
    return 0;
}