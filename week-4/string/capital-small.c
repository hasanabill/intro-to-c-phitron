#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    fgets(name, sizeof(name), stdin);

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            name[i] -= 32;
    }

    puts(name);

    return 0;
}