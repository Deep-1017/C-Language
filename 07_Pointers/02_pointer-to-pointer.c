#include <stdio.h>

int main() {
    int i = 10;

    int *j;
    j = &i;

    int **k;
    k = &j;

    return 0;
}