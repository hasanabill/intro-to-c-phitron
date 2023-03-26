#include <stdio.h>
void func(int x, int y, int *l, int *s)
{
    *l = x > y ? x : y;
    *s = x > y ? y : x;
}
int main()
{
    int a = 50, b = 126;
    int large, small;
    func(a, b, &large, &small);
    printf("large %d, small %d\n", large, small);
    return 0;
}