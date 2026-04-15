#include <stdio.h>
int ap(int a, int d, int n)
{
    if (n == 1)
        return a;
    return d + ap(a, d, n - 1);
}

int main()
{
    printf("%d\n", ap(2, 3, 5));
    return 0;
}