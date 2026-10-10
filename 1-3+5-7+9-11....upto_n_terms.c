// 1-3+5-7+9-11....upto n terms
#include <stdio.h>
int main()
{
    int i = 1, n, t = 1, sum = 0, sign = 1;
    printf("Enter the number term: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += sign * t;
        if (i < n)
        {

            if (sign == 1)
            {
                printf("%d-", t);
            }
            else
            {
                printf("%d+", t);
            }
        }
        else
        {
            printf("%d", t);
        }
        t += 2;
        sign *= (-1);
        i++;
    }
    printf("\nSum=%d", sum);
    return 0;
}