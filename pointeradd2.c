#include <stdio.h>

int addNumber(int *num1, int *num2);

int main() {
    int sum, num1, num2;
    printf("enter the number: ");
    scanf("%d", &num1);
    printf("enter the number: ");
    scanf("%d", &num2);

    sum = addNumber(&num1, &num2);
    printf("sum of %d and %d is %d", num1, num2, sum);
    return 0;
}

int addNumber(int *num1, int *num2) {
    int sum = *num1 + *num2;
    return sum;
}
