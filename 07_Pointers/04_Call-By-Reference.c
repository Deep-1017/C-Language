#include <stdio.h>

void swap(int *x, int *y)
{

    printf("Before Swapping\n");
    printf("%d %d\n", *x, *y);

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("-------------------------------------\n");

    printf("After Swapping\n");
    printf("%d %d\n", *x, *y);
}

int main()
{
    int a = 10;
    int b = 20;

    swap(&a, &b);

    return 0;
}