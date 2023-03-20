#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int i, n;
    scanf("%d", &n);
    n++;
    int arr[n];
    for (i = 1; i < n; i++)
        scanf("%d", &arr[i]);

    int q, L, R;
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d%d", &L, &R);
        swap(&arr[L], &arr[R]);
    }
    for (i = 1; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}