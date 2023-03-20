#include <stdio.h>
#include <string.h>

char sort(char str[], int l)
{
    int i, j, temp;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (str[j] < str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    printf("%s\n", str);
}

int main()
{
    char string[1024];
    gets(string);
    sort(string, strlen(string));
    return 0;
}