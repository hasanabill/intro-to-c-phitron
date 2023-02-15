#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, i, highestMark = 0;
    int marks[100];
    int diffMarks[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (highestMark < marks[i])
        {
            highestMark = marks[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        diffMarks[i] = highestMark - marks[i];
        printf("%d ", diffMarks[i]);
    }

    return 0;
}
