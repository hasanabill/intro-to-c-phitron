#include <stdio.h>

int main()
{
    int arr[105];
    int i, n;
    int ec = 0;
    int oc = 0;
    int ans;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    if (ec == 1)
    {
        for (i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                ans = i;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}