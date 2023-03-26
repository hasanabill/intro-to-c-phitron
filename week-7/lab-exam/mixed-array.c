#include <stdio.h>
int primeCount(int arr[], int n)
{
    int i, j, c = 0;
    for (i = 0; i < n; i++)
    {
        if (*(arr + i) == 2)
            c++;
        else
        {
            for (j = 2; j < *(arr + i); j++)
            {
                if (*(arr + i) % j == 0)
                {
                    c++;
                    break;
                }
            }
        }
    }
    return c;
}

float evenAvg(int arr[], int n)
{
    int i, c = 0;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            sum += (float)*(arr + i);
            c++;
        }
    }
    return sum / c;
}
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers: %d\n", primeCount(arr, n));
    printf("Average of all even integers: %.2f\n", evenAvg(arr, n));

    return 0;
}