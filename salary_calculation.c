/* Write a C program to read the basic salary and calculate 
   HRA= 10% of salary 
   DA= 5% of salary 
If the salary>=20,000....then apply 10% of tax else 7% of tax*/
#include <stdio.h>
int main()
{
    float basic_salary, hra, da, tax, net_salary;
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    hra = (basic_salary * 10 / 100);
    da = (basic_salary * 5 / 100);
    if (basic_salary >= 20000)
    {
        tax = (basic_salary * 10 / 100);
    }
    else
    {
        tax = (basic_salary * 7 / 100);
    }
    net_salary = basic_salary + hra + da - tax;
    printf("The net salary is: %.2f\n", net_salary);
    return 0;
}