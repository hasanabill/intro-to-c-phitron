#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    char str[100];
    int len, len2, flag;
    float lenstr;

    for (j = 0; j < T; j++)
    {
        scanf("%s", &str);
        len = strlen(str);
        len2 = strlen(str);
        lenstr = strlen(str);
        flag = 0;

        for (i = 0; i <= len / 2; i++)
        {
            if (str[i] == str[len - 1])
            {
                flag++;
            }
            len--;
        }
        // printf("flag %d lenstr = %f\n", flag, round(lenstr / 2));
        if (flag == round(lenstr / 2) && lenstr <= 7)
            printf("Case #2: %s\n", str);
        else if (flag == round(lenstr / 2) && lenstr > 7)
            printf("Case #3: %c%d%c\n", str[0], lenstr - 2, str[len2 - 1]);
        else
            printf("Case #1: Not Palindrome\n");
    }

    return 0;
}