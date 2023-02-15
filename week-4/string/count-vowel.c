#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char text[200];
    // scanf("%s", text);

    // gets(text);
    fgets(text, sizeof(text), stdin);

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}