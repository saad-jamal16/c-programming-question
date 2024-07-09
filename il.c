#include <stdio.h>


void ilu(int n);

int main() {
    int i, n;


    printf("Enter the number of times you want to print ilu: ");
    scanf("%d", &n);

    // call
    ilu(n);

    return 0;
}

// Function definition
void ilu(int n) {
    // Declare i inside the function
    for (int i = 0; i < n; i++) {
        // Use the correct format specifier for \n in printf
        printf("I LOVE YOU\n");
    }
}
