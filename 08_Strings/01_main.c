#include<stdio.h>

int main() {

    // char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str[] = "Hello World"; // The compiler automatically adds the null terminator '\0' at the end of the string

    // str[6] = 'w';

    int length = sizeof(str) / sizeof(str[0]) - 1; // Calculate the length of the string (excluding the null terminator)

    for (int i = 0; i < length; i++)
    {
        printf("%c\n", str[i]);
    }
    

    // printf("String: %s\n", str);
    // printf("Char: %c\n", str[6]);

    return 0;
}