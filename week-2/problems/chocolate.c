#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int choc = n;
    int pack = n;

    while (pack >= 4)
    {
        choc += (pack / 4);
        pack = (pack / 4) + (pack % 4);
    }
    printf("Total chocolate eaten is %d", choc);
    return 0;
}