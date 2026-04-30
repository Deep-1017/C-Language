#include <stdio.h>

struct employee
{
    int emp_code;
    char emp_name[20];
    float emp_salary;
};

int main() {
    
    struct employee facebook[100];

    facebook[0].emp_code = 101;
    facebook[0].emp_salary = 50000.00;

    

    return 0;
}