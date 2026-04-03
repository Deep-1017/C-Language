#include <stdio.h>

int mul(int a, int b);

int mul(int a, int b) {
    return a * b;
}

int main() {
    int result = mul(10, 20);
    printf("%d\n", result);
    return 0;
}