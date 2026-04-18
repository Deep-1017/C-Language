#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    arr[1][0] = 100;

    printf("%d\n", arr[1][2]);
    printf("%d\n", arr[1][0]);
    return 0;
}