#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
