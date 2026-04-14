#include <stdio.h>

int main() {
    
    int num;
    num = 10;

    int numbers[5] = {10, 20, 30, 40, 50};
    printf("Before update: %d\n", numbers[2]);

    numbers[2] = 25;
    printf("After update: %d\n", numbers[2]);

    char words[] = {'a', 'b', 'c', 'd', 'e'};

    return 0;
}