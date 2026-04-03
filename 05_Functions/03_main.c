#include <stdio.h>

float sum(float a, float b);

float sum(float a, float b) {
    printf("%f\n", a + b);
}

int main() {
    sum(23.5, 12.5);
    return 0;
}