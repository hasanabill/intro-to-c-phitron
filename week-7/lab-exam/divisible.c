#include <stdio.h>
int divThree(int arr[], int n)
{
    int c = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
            c++;
    }
    return c;
}
int divFive(int arr[], int n)
{
    int c = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0)
            c++;
    }
    return c;
}
int main()
{
    int i, n, div3, div5, c = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    div3 = divThree(arr, n);
    div5 = divFive(arr, n);
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0 && arr[i] % 3 == 0)
            c++;
    }
    if (div3 == 0 && div5 == 0)
        printf("%d", -1);
    else
        printf("%d", div3 + div5 - c);
    return 0;
}