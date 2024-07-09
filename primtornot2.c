#include<stdio.h>

int main() {
    int num, n;
    printf("enter the number: ");
    scanf("%d", &num);

    // Initialize n to num
    n = num;

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    int is_prime = 1;  // Assume the number is prime

    // Check if num is a prime number
    if (num <= 1) {
        is_prime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;  // If num is divisible, it's not prime
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
