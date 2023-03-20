#include <stdio.h>

int summ(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && (i + 1) % 2 == 0)
            sum += (arr[i] + (i + 1));
        else if (arr[i] % 2 == 1 && (i + 1) % 2 == 1)
            sum += (arr[i] + (i + 1));
    }
    return sum;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = summ(arr, n);
    printf("sum = %d\n", sum);

    return 0;
}