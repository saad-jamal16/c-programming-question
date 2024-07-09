#include<stdio.h>

void fibonacci(int num1, int num2, int count, int term);

int main() {
    int num1 = 0, num2 = 1, term;
    printf("Input the number for term of series: ");
    scanf("%d", &term);

    printf("The series are: %d %d ", num1, num2); // The first two numbers of the series
    fibonacci(num1, num2, 2, term); // 2 because we already printed two terms

    return 0;
}

void fibonacci(int num1, int num2, int count, int term) {
    if(count < term) {
        int nextnum = num1 + num2;
        printf("%d ", nextnum);

        fibonacci(num2, nextnum, count + 1, term); // Recursive call
    }
}
