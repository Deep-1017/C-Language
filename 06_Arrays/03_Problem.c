#include <stdio.h>

int main()
{

    int arr[3][2];

    // Taking input for 2D array
    printf("Enter elements for a 2D array of size 3x2:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Displaying the 2D array
    printf("\n\nThe 2D array is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}