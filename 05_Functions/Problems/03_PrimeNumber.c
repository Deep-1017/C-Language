#include <stdio.h>

int isPrime(int num);

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int res = isPrime(19);
    if (res) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }
    return 0;
}