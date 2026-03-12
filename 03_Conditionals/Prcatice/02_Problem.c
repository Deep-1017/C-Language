#include<stdio.h>

int main() {

    int number;

    printf("Enter a number: ", number);
    scanf("%d", &number);

    if(number > 0) {
        printf("POSITIVE !!!");
    }
    else if(number == 0) {
        printf("ZERO !!!");
    }
    else {
        printf("NEGATIVE !!!");
    }


    return 0;
}