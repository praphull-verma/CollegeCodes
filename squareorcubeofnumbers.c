#include <stdio.h>
#include <math.h> // For sqrt function

int main() {
    float num, square, cube, squareRoot;

    // Input a number
    printf("Enter a number: ");
    scanf("%f", &num);

    // Calculate square, cube, and square root
    square = num * num;
    cube = num * num * num;
    squareRoot = sqrt(num);

    // Display results
    printf("Square of %.2f: %.2f\n", num, square);
    printf("Cube of %.2f: %.2f\n", num, cube);

    // Check if the square root is valid (non-negative number)
    if (num >= 0) {
        printf("Square root of %.2f: %.2f\n", num, squareRoot);
    } else {
        printf("Square root of %.2f is not defined for negative numbers.\n", num);
    }

    return 0;
}
