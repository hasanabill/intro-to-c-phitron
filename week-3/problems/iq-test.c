// from codeforce

// from codeforce

#include <stdio.h>
int main()
{
    int arr[105];
    int n, i, ans;
    int ec = 0, oc = 0;
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
        // position
        for (i = 1; i <= n; i++)
        {
            {
                if (arr[i] % 2 == 0)
                {
                    ans = i;
                }
            }
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            {
                if (arr[i] % 2 != 0)
                {
                    ans = i;
                }
            }
        }
    }

    printf("%d", ans);

    return 0;
}