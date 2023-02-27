#include <stdio.h>
int isPrime(int a)
{
    int i;
    if (a == 1)
        return 1;
    else if (a == 2)
        return 1;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
    printf("5");
}
int main()
{
    int a, prm;
    scanf("%d", &a);

    prm = isPrime(a);

    if (prm == 1)
        printf("Prime\n");
    else
        printf("Composite\n");

    return 0;
}
