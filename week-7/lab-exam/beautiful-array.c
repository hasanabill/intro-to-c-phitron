#include <stdio.h>
#include <math.h>

int sevenPresent(int arr[], int n)
{
    int i, j, c = 0;
    for (i = 0; i < n; i++)
    {
        while (*(arr + i) > 0)
        {
            if (*(arr + i) % 10 == 7)
            {
                c++;
                break;
            }
            *(arr + i) /= 10;
        }
    }
    float x = round((float)n / 2);
    if (c >= x)
        return 1;
    else
        return 0;
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (sevenPresent(arr, n) == 1)
        printf("Beautiful\n");
    else
        printf("Ugly\n");
    return 0;
}