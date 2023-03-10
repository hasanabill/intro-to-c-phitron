#include <stdio.h>
#include <string.h>
int numPresent(char x, char num[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (x == num[i])
            return 1;
        i++;
    }
    return 0;
}
int main()
{
    char num[100];
    gets(num);
    int n = strlen(num);
    int oneP, sevenP, nineP;
    oneP = numPresent('1', num, n);
    sevenP = numPresent('7', num, n);
    nineP = numPresent('9', num, n);
    if (oneP && sevenP && nineP)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
