#include <stdio.h>

int sumOfDigits(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum += (a % 10);
        a /= 10;
    }
    return sum;
}

int isPrime(int a)
{
    int i, flag = 0;
    for (i = 2; i <= a / 2; i++)
        if (a % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, sod, prime;
    scanf("%d", &n);
    sod = sumOfDigits(n);
    prime = isPrime(sod);
    printf("%d\n", prime);
    if (prime == 1)
        printf("Farhans Number\n");
    else
        printf("Not\n");

    return 0;
}