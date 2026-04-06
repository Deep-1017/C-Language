#include <stdio.h>

void greet();
void morning();

void greet() {
    printf("Welcome to C Language !\n");
    // morning();
}

void morning() {
    printf("Good Morning !\n");
}

int main()
{
    greet();
    return 0;
}