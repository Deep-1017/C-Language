#include <stdio.h>
#include <string.h>

struct employee
{
    int emp_code;
    char emp_name[20];
    float emp_salary;
};

int main() {
    struct employee emp1;

    emp1.emp_code = 101;
    strcpy(emp1.emp_name, "Deep Kansara");
    emp1.emp_salary = 50000.0;

    struct employee *ptr = &emp1;

    printf("%d\n", (*ptr).emp_code);
    printf("%s\n", (*ptr).emp_name);
    printf("%.2f\n", ptr->emp_salary);

    return 0;
}