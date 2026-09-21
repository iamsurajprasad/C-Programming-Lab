/*Question:
Write a C program to calculate the total wage of a worker based on the number of hours worked.
The wage rate is calculated according to the following conditions:
 For the first 8 hours, the wage rate is ₹100 per hour.
 For the next 4 hours (8 to 12 hours), the wage rate is ₹150 per hour.
 For hours worked beyond 12 hours, the wage rate is ₹200 per hour.
*/
#include <stdio.h>
int main()
{
    float hours, wage;
    printf("Enter total hours worked: ");
    scanf("%f", &hours);
    if (hours <= 8)
    {
        wage = hours * 100;
    }
    else if (hours <= 12)
    {
        wage = (8 * 100) + ((hours - 8) * 150);
    }
    else
    {
        wage = (8 * 100) + (4 * 150) + ((hours - 12) * 200);
    }
    printf("Total Wage = %.2f\n", wage);
    return 0;
}