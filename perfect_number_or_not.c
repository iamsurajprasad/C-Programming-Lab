//write a c program to check whether a number is perfect or not
#include <stdio.h>
int main()
{
	int n, i=1, sum=0;
	printf("Enter a number :");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(n<=0){
		printf("not a perfect number");
	}
	else if(sum==n)
	{
		printf("perfect number");
	}
	
	else{
		printf("not a perfect number");
	}
	
	return 0;
}
