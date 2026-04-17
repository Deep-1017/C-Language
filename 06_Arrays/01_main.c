#include <stdio.h>

int main()
{
    int num;
    num = 10;

    int numbers[5] = {10, 20, 30, 40, 50};
    // printf("Before update: %d\n", numbers[2]);

    numbers[2] = 25;
    // printf("After update: %d\n", numbers[2]);

    char words[] = {'a', 'b', 'c', 'd', 'e'};
    // printf("%c\n", words[0]);
    // printf("%c\n", words[1]);
    // printf("%c\n", words[2]);
    // printf("%c\n", words[3]);
    // printf("%c\n", words[4]);

    int length;
    length = sizeof(words) / sizeof(words[0]);
    // printf("%d\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("%c\n", words[i]);
    }
    

    return 0;
}