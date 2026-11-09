/*write a c program to print the following pattern:
    *
   **
  *** 
 ****
*****
*/

#include <stdio.h>

int main(){
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
