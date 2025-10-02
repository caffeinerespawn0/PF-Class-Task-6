#include <stdio.h>
int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    int quotient = 0;
    while (a >= b) {
        a -= b;
        quotient++;
    }
    return quotient;
}

int main() {
    int choice, x, y;

    printf("Choose operation:\n1. Multiplication\n2. Division\n");
    scanf("%d", &choice);

    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);

    if (choice == 1) {
        printf("Result: %d\n", multiply(x, y));
    } else if (choice == 2) {
        printf("Result: %d\n", divide(x, y));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

