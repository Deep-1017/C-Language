#include <stdio.h>

int isPalindrome(int num);

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while(num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse) {
        return printf("The number is a palindrome.\n");
    } else {
        return printf("The number is not a palindrome.\n");
    }
}

int main() {
    isPalindrome(1231);
    return 0;
}


// 23 = 2 *100 + 3*10 + 4*1

// digit = 234 % 10  
// reverse = reverse*10 + digit = 4
// num = 234 / 10  = 23


// num = 23

// digit = 23 % 10 = 3
// reverse = reverse*10 + digit = 4*10 + 3 = 43
// num = 23 / 10 = 2

// num = 2

// digit = 2 % 10 = 2
// reverse = 43*10 + 2 = 432
// num = 2 / 10  = 0

// num = 0
