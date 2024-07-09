#include <stdio.h>

int main() {
    int i, num, sum = 0;  // Initialize sum to 0
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num);  // Corrected the format specifier and added '&' before num

    for (i = 1; i <= 10; i++) {
        sum = sum + num;  // Accumulate the sum correctly
    }

    avg = (float)sum / 10;  // Calculate the average using floating-point division

    printf("The sum of 10 numbers is %d\n", sum);  // Print the sum
    printf("The average is %f\n", avg);  // Print the average

    return 0;
}
