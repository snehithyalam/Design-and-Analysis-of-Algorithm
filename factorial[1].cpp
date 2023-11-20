#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for non-negative input
    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        // Calculate and print the factorial
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;
}
