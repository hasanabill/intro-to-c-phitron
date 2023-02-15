// Team from codeforce

#include <stdio.h>

int main()
{
    int n, i, counter;
    int a, b, c;
    scanf("%d", &n);
    int solved = 0;
    for (i = 0; i < n; i++)
    {
        counter = 0;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
        {
            solved++;
        }
    }
    printf("%d", solved);

    return 0;
}