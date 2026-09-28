/*2+5+8+11+14...upto n terms.
Write a C program to calculate sum of the given series.*/

#include <stdio.h>
int main()
{
	int term = 2, i = 1 , n ,sum = 0;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	while (i<=n)
	{
		sum = sum+term;
		term = term+3;
		i++;	
	}
	printf("Sum of the series: %d",sum);
	return 0;
}
