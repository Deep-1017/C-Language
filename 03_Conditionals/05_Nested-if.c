#include<stdio.h>

int main() {

    int x = 1;
    int y = 20;

    if(x > 4) {
        if(y > 10) {
            printf("Value exceeds 4 & 10");
        }
        else{
            printf("Value not exceeds"); 
        }
    }
    else {
        printf("Value less than 4");
    }

    return 0;
}