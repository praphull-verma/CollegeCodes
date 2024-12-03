#include <stdio.h>
#include <math.h>

// Function prototypes
void basicOperations();
void advancedOperations();

int main() {
    int choice;

    do {
        // Display menu
        printf("\n*** Calculator Menu ***\n");
        printf("1. Basic Operations\n");
        printf("2. Advanced Operations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                basicOperations();
                break;
            case 2:
                advancedOperations();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

// Function for basic operations
void basicOperations() {
    double num1, num2, result;
    char operator;

    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator! Please try again.\n");
            return;
    }

    printf("Result: %.2lf\n", result);
}

// Function for advanced operations
void advancedOperations() {
    int choice;
    double num, result;

    printf("\n*** Advanced Operations ***\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("4. Logarithm\n");
    printf("5. Exponential\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number: ");
    scanf("%lf", &num);

    switch (choice) {
        case 1: result = sin(num); break;
        case 2: result = cos(num); break;
        case 3: result = tan(num); break;
        case 4:
            if (num <= 0) {
                printf("Error: Logarithm of non-positive numbers is not defined.\n");
                return;
            }
            result = log(num);
            break;
        case 5: result = exp(num); break;
        default:
            printf("Invalid choice! Please try again.\n");
            return;
    }

    printf("Result: %.2lf\n", result);
}

