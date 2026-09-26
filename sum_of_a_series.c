/*Write a C program to find sum of following series:
5 1!+3!+5!.... upto n number
1!=1
3!=3*2*1=6
5!=5*4*3*2*1=120
up to n!*/

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;

    while(i <= n)
    {
        int fact = 1;
        int j = 1;

        while(j <= i)
        {
            fact = fact * j;
            j++;
        }

        sum += fact;
        i = i + 2;
    }

    printf("%d", sum);

    return 0;
}