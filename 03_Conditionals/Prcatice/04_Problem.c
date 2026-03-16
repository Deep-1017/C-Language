#include <stdio.h>

int main()
{

    int angle1, angle2, angle3;

    printf("Enter the value of angle1: ");
    scanf("%d", &angle1);

    printf("Enter the value of angle2: ");
    scanf("%d", &angle2);

    printf("Enter the value of angle3: ");
    scanf("%d", &angle3);

    if (angle1 + angle2 + angle3 == 180)
    {
        if ((angle1 == angle2) && (angle2 == angle3))
        {
            printf("Equilateral");
        }
        else if ((angle1 == angle2) || (angle2 == angle3) || (angle1 == angle3))
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Not Valid");
    }

    return 0;
}