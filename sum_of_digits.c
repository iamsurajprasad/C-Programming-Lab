//Write a C program to calculate sum of digits.
#include <stdio.h>
int main()
{
	int num, digit, sum=0;
	printf("Enter the whole number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		sum=sum+digit;
	}
	printf("Sum of the digits are: %d",sum);	
	return 0;
}
