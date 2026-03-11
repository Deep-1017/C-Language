#include<stdio.h>

int main() {
    int age = 20;

    if(age >= 18) {
        printf("You are eligible to vote.\n");
    }
    else if(age >= 5) {
        printf("You are child");
    }
    else {
        printf("You are not eligible to vote.\n");
    }
}