#include <stdio.h>
#include <string.h>

struct employee
{
    int emp_code;
    char emp_name[20];
    float emp_salary;
};


int main() {

    struct employee emp1, emp2;

    emp1.emp_code = 101;
    strcpy(emp1.emp_name, "Deep Kansara");
    emp1.emp_salary = 50000.0;

    printf("Employee Code: %d\n", emp1.emp_code);
    printf("Employee Name: %s\n", emp1.emp_name);
    printf("Employee Salary: %.2f\n", emp1.emp_salary);


    printf("------------------------------\n");


    printf("Enter Employee Code for emp2: ");
    scanf("%d", &emp2.emp_code);

    printf("Enter Employee Name for emp2: ");
    scanf("%s", emp2.emp_name);

    printf("Enter Employee Salary for emp2: ");
    scanf("%f", &emp2.emp_salary);

    printf("------------------------------\n");
    printf("Employee Code: %d\n", emp2.emp_code);
    printf("Employee Name: %s\n", emp2.emp_name);
    printf("Employee Salary: %.2f\n", emp2.emp_salary);



    struct employee emp3 = {102, "John Doe", 60000.0};

    return 0;
}