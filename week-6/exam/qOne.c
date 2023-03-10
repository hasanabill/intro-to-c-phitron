#include <stdio.h>
#include <string.h>

int main()
{
    char txt[1024];
    gets(txt);
    int i;
    for (i = 0; i < strlen(txt); i++)
    {
        if (txt[i] > 64 && txt[i] < 91)
            txt[i] += 32;
        else
            txt[i] -= 32;
    }
    printf("%s\n", txt);
    return 0;
}