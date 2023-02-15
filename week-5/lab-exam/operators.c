#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[20];
    int a, b, i, sum = 0;
    scanf("%s", &S);
    scanf("%d%d", &a, &b);

    for (i = 0; i < strlen(S); i++)
    {
        if (S[i] == '+')
        {
            sum += a + b;
        }
        else if (S[i] == '*')
        {
            sum += a * b;
        }
    }

    printf("%d\n", sum);

    return 0;
}
