#include <stdio.h>

float findMedian(int ara[], int araSize)
{
    int i, j, temp, x;
    float median;
    for (j = 0; j < araSize - 1; j++)
    {
        for (i = 0; i < araSize - 1; i++)
        {
            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
    if (araSize % 2 == 0)
    {
        x = araSize / 2;
        median = (float)(ara[x - 1] + ara[x]) / 2;
    }
    else
    {
        x = (araSize + 1) / 2;
        median = ara[x - 1];
    }
    return median;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    // 11, 12, 22, 25, 34, 64, 82, 90

    float med = findMedian(arr, 7);
    printf("median = %.2f\n", med);
}