// 1. Increment Operator (++)
    // post inc
    // pre inc
// 2. Decrement Operator (--)
    // post dec
    // pre dec

#include <stdio.h>

int main() {

    int a = 10;

    // a = a + 1;
    // a += 1;

    printf("%d\n", a);

    ++a;

    printf("%d\n", a);

    --a;

    printf("%d\n", a);

    return 0;
}