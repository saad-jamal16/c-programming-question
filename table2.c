#include <stdio.h>

int main() {
    int i, n, num;

    printf("Input the number table to be calculated: ");
    scanf("%d", &num);

    printf("Input the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
