#include <stdio.h>
int primeCount(int arr[], int n)
{
    int i, j, c = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 2)
            c++;
        else
        {
            for (j = 2; j < arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    c++;
                    break;
                }
            }
        }
    }
    return c;
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int primeC = primeCount(arr, n);
    printf("Prime numbers: %d\n", primeC);

    return 0;
}