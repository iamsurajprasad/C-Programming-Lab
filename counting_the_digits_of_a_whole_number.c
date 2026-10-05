//Write a C program to count the digits of a whole number.
#include <stdio.h>
int main()
{
	int count=0, num, digits;
	printf("Enter a whole number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		digits=num%10;
		printf("%d\n",digits);
		count++;
		num=num/10;
	}
	printf("Counted digits are: %d\n",count);
	return 0;
}
