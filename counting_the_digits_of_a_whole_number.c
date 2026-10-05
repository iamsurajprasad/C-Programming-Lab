//Write a C program to count the digits of a whole number.
#include <stdio.h>
int main()
{
	int count=0, num;
	printf("Enter a whole number: ");
	scanf("%d",&num);
	while(num>0)
	{
		count++;
		num/=10;
	}
	printf("Count of digits: %d\n",count);
	return 0;
}
