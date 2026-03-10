// + -> Operator
// 10, 20 -> Operands

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 25;

    bool isNum = true;

    printf("%d\n", (num3 < 5) && (num3 < 30));
    printf("%d\n", (num3 < 5) || !(num3 < 30));
        //  T      &&       T

    // printf("%d", num1 != num2);

    // Arithmetic Op => +, -, *, /, %
    // Assignment OP => =, +=, -=, *=, /=, %=
    // Comparison Op => <, >, <=, >=, ==, !=
    // Logical Op => AND (&&), OR (||), NOT (!)


    /*
    int add = 10 + 20; // 30
    int sub = 10 - 20; // -10
    int mul = 10 * 20; // 200
    int div = 10 / 20; // 0
    int mod = 21 % 5;
    */
    // printf("%d\n", sub);
    // printf("%d\n", mul);
    // printf("%d\n", div);
    // printf("%d\n", mod);


    // num1 = num1 + 10;
    // num1 += 10;

    return 0;
}