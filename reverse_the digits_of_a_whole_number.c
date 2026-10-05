//Write a C program to reverse the digits of an whole number.
#include <stdio.h>
int main()
{
	int num, reverse=0, digits;
	printf("Enter a whole number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		digits=num%10;
		reverse=reverse*10+digits;
		num=num/10;
	}
	printf("Reverse=%d",reverse);
	return 0;
}
