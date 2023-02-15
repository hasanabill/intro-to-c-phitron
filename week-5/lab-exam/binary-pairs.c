#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int T, N, i, j, count;
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        char S[N];
        scanf("%s", &S);
        count = 0;
        for (j = 0; j < strlen(S); j++)
        {
            if (S[j] == '0' && S[j + 1] == '1')
            {
                count++;
            }
            else if (S[j] == '1' && S[j + 1] == '0')
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
