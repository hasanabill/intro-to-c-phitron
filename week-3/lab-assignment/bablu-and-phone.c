#include <stdio.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    char str[50];
    while (n--)
    {
        int charge;
        scanf("%d", &charge);
        getchar();

        int time = 0;

        if (charge < 60)
            time += 60 - charge, charge = 60;
        if (charge < 80)
            time += (80 - charge) * 2, charge = 80;
        if (charge < 100)
            time += (100 - charge) * 3;
        if (time == 0)
            printf("%d minute\n", time);
        else
            printf("%d minutes\n", time);
    }

    return 0;
}