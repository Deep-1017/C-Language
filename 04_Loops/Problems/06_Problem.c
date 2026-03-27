#include <stdio.h>

int main()
{

    int n;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("First Even number is %d", n);
            break;
        }
    }

    return 0;
}