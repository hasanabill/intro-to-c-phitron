#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int shift;
    scanf("%s %d", str, &shift);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char c = str[i] + shift;
        if (c > 'z')
            c = 'a' + (c - 'z' - 1);
        printf("%c", c);
    }
    printf("\n");

    return 0;
}
