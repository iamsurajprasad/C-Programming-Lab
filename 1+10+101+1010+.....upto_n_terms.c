/*write a c program to find the sum of the following series:
1+10+101+1010+.....upto n terms*/
#include <stdio.h>
int main()
{
    int i = 1, n, t = 0;
    long long sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (t % 2 == 0)
        {
            t = t * 10 + 1;
            printf("\n%d", t);
        }
        else
        {
            t = t * 10;
            printf("\n%d", t);
        }
        i++;
        sum = sum + t;
    }
    printf("\nThe sum of the series: %d", sum);
    return 0;
}