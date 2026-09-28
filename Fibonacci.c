/*0,1,1,2,3,5,8...upto_n_terms.
Write a C program to display the given sequence.*/

#include <stdio.h>

int main() 
{
    int n, i=1, a=0, b=1, c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    while(i<=n)
    {
    	printf("%d\t",a);
    	c=a+b;
    	a=b;
    	b=c;
    	i++;
	}
    return 0;
}
