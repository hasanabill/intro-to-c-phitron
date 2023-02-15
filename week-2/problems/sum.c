#include <stdio.h>

int main()
{

    int n, w, sum = 0;
    printf("Enter the number of passengers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &w);

        sum += w;
    }
    printf("Total weight is %d", sum);

    return 0;
}