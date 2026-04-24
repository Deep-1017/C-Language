#include <stdio.h>

int main() {
    int i = 10;
    // printf("Value of i: %d\n", i);

    int *j;
    j = &i;

    printf("Value of i: %d\n", i);
    printf("Address of i: %u\n", &i);
    printf("Value of j: %u\n", j);
    printf("Address of j: %u\n", &j);
    printf("Value of i: %u\n", *(&i));
    printf("Value of i: %u\n", *(*(&j)));
    return 0;
}
