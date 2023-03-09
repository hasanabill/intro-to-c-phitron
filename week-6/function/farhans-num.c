/*
12739462
1. 7 must be present
2. digit summation more than 10
3. last digit must be prime
*/

#include <stdio.h>

int sevenPresent(int x);
int dgsum(int x);
int lDPrice(int x);

int main()
{
    int n;
    scanf("%d", &n);
    if (sevenPresent(n) == 1 && dgsum(n) > 10 && lDPrice(n))
        printf("Farhan's Number\n");
    else
        printf("Not\n");
}

int sevenPresent(int x)
{

    while (x > 0)
    {
        if (x % 10 == 7)
            return 1;

        x /= 10;
    }
    return 0;
}
int dgsum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int lDPrice(int x)
{
    int ld = x % 10;
    if (ld == 2 || ld == 3 || ld == 7 || ld == 5)
        return 1;
    else
        return 0;
}
