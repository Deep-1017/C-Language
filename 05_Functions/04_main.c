#include <stdio.h>

int getNumber();

int getNumber() {
    return 100;
}

int main() {
    int num = getNumber();
    printf("%d\n", num);

    return 0;
}