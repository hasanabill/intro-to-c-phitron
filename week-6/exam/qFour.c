#include <stdio.h>
int main()
{
    int n, k, i, c = 0;
    scanf("%d%d", &n, &k);
    int nums[n];
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            nums[c] = i;
            c++;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            nums[c] = i;
            c++;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", nums[i]);

    printf("\nThe %dth element in this sequence is %d.\n", k, nums[k - 1]);

    return 0;
}