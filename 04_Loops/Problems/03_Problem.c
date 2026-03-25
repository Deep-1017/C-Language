#include <stdio.h>

int main() {
    int fact = 1;
    int n = 6;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}

// n = 6
// 1st itr => i = 1, fact = 1 => fact = 1 * 1 = 1, i = 2
// 2nd itr => i = 2, fact = 1 => fact = 1 * 2 = 2, i = 3
// 3rd Itr => i = 3, fact = 2 => fact = 3 * 2 = 6, i = 4
// 4th Itr => i = 4, fcat = 6 => fcat = 4 * 6 = 24, i = 5
// 5th Itr => i = 5, fcate = 24 => fcat = 24 * 5 = 120, i = 6
// 6th Itr => i = 6, fact = 120 => fact = 120 * 6 = 720, i = 7
// 7th Itr => i = 7, fcat = 720