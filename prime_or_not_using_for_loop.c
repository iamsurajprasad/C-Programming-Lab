//write a c program to check whether a number is prime or not using for loop
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            break;
        }
    }

    if (n <= 1) {
        printf("Not a prime number\n");
    } else if (i == n) {
        printf("Prime number\n");
    } else {
        printf("Not a prime\n");
    }

    return 0;
}

