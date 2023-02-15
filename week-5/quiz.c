// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     int a = num / -4;
//     int b = num % -4;
//     printf("%d %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 1, y = -1;
//     printf("%d", (x != 7) && (x <= y));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     for (i)
//     {
//         printf("Phitron");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int ar[] = {2, 4, 6, 8};

//     ar[0] = 23;
//     ar[3] = ar[1];
//     printf("%d%d", ar[0], ar[3]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int array[2][3] = {{10, 20, 30}, {40, 50, 60}}, i = 1, j = 0;

//     array[i][j] = array[j][i];

//     printf("%d,%d", array[i][j], array[j + 1][i + 1]);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int m, n;
    int N = 10;

    for (n = 1; n <= N; n++)
    {
        printf("#");
    }
    printf("\n");
    for (m = 1; m <= (N - 2); m++)
    {
        printf("#");
        for (n = 1; n <= (N - 2); n++)
        {
            printf(" ");
        }

        printf("#\n");
    }
    for (n = 1; n <= N; n++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}