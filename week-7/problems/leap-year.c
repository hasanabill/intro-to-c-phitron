#include <stdio.h>

int isLeapYear(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        return 1;
    else
        return 0;
}
int isDistinct(int n)
{
    int ld;
    int countDigit[10] = {0};
    while (n > 0)
    {
        ld = n % 10;
        countDigit[ld]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (countDigit[i] > 1)
            return 0;
    }
    return 1;
}
int main()
{
    int year;
    scanf("%d", &year);
    if (isLeapYear(year) && isDistinct(year))
        printf("Beautiful year");
    else
        printf("not");

    return 0;
}