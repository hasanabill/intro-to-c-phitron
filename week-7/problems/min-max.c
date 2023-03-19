#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max)
{
    int i;
    *min = arr[0];
    *max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (*min > arr[i])
            *min = arr[i];
        if (*max < arr[i])
            *max = arr[i];
    }
}

int main()
{
    int arr[] = {12, 6, 9, 3, 4, 21, 66};
    int n = 7;
    int maxx, minn;
    findMinMax(arr, n, &minn, &maxx);
    printf("max = %d and min = %d\n", maxx, minn);
    return 0;
}