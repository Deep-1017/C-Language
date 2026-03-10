// Write a program that takes an integer input and checks whether it is even or odd.

#include<stdio.h>

int main() {

    int number = 125;

    if(number % 2 == 0) {
        printf("EVEN Number");
    }
    else {
        printf("ODD Number !");
    }

    return 0;
}