// Functions
    // 1. Function Prototype
    // 2. Function Definition
    // 3. Function Call

#include <stdio.h>

// Prototype
int addition(int a, int b);

// Definition
int addition(int a, int b) {
    printf("%d\n", a + b);
}

int main() {
    // Function Call
    addition(10, 20);
    return 0;
}