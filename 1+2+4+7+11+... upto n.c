//1+2+4+7+11+... upto n
#include<stdio.h>
int main()
{
	int i=1,n,sum=0, term=1, d=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=term;
		term=term+d;
		d++;
		i++;
	}
	printf("the sum of the series is: %d",sum);
	return 0;
}
