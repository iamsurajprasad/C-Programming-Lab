/*Write a c program to print the following pattern:
12345
 1234
  123
   12
    1
*/

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}