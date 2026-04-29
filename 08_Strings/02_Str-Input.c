#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Hello, %s!\n", name);

    gets(name); 
    // printf("Hello, %s!\n", name);
    puts(name);

    return 0;
}