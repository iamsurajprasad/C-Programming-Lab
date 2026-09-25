/*write a c program to display odd numbers from 1-n */
#include <stdio.h>
int main()
{
	int n, i=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Odd numbers from 1 to %d\n",n);
	while(i<=n){
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
	
