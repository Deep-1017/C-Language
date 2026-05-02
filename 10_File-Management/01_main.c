#include <stdio.h>

int main() {
    int num;
    int num_wrt = 500;

    char str[100] = "Hello World!";

    FILE *ptr;
    // ptr = fopen("demo.txt", "r");
    // fscanf(ptr, "%d", &num);
    // printf("Number: %d\n", num);

    ptr = fopen("demo.txt", "a");
    fprintf(ptr, "%d", num_wrt);
    fprintf(ptr, " %s", str);
    fclose(ptr);

    return 0;
}