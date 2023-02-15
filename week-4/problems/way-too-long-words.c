// from codeforce

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char name[101];
        scanf("%s", name);

        int l = strlen(name);

        if (l > 10)
        {
            printf("%c%d%c\n", name[0], l - 2, name[l - 1]);
        }
        else
        {
            printf("%s\n", name);
        }
    }

    return 0;
}