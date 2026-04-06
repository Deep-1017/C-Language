#include <stdio.h>

int fact(int n);

int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

int main() {
    fact(5);
    
    return 0;
}


// 5! = 5 * 4 * 3 * 2 * 1     = 5 * 4!
// 6! = 6 * 5 * 4 * 3 * 2 * 1 = 6 * 5!

// n! = n * (n-1)!