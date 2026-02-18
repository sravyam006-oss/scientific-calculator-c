#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("\n===== SCIENTIFIC CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("0. Exit\n");
}

int main() {
    int choice;
    double a, b, result;

    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting calculator...\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0)
                    printf("Error: Division by zero not allowed!\n");
                else {
                    result = a / b;
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = pow(a, b);
                printf("Result = %.2lf\n", result);
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a < 0)
                    printf("Error: Negative number has no real square root!\n");
                else {
                    result = sqrt(a);
                    printf("Result = %.2lf\n", result);
                }
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
