#include <stdio.h>
#include <string.h>
void repKeyPress(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", str[i]);
        if (i % 2 == 1)
        {
            printf("%c", str[i]);
        }
    }
}
int main()
{
    int n;
    char str[100];
    gets(str);
    n = strlen(str);
    repKeyPress(str, n);
    return 0;
}