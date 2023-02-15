#include <stdio.h>
#include <string.h>

int main()
{
    char str[102], str2[102];
    int i;
    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len = strlen(str) - 1;
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] += 32;
        }
    }

    for (i = 0; i < len; i++)
    {
        if (str[i] < str2[i])
        {
            printf("-1\n");
            return 0;
        }
        else if (str[i] > str2[i])
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");

    return 0;
}