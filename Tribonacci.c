//Tribonacci
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c = 1, d, i = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Tribonacci sequence: ");
    while (i < n) 
	{
        printf("%d ", a);
        d = a + b + c;
        a = b;
        b = c;
        c = d;
        i++;
    }
    return 0;
}

