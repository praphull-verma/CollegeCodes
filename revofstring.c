#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int length = 0, i;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0'; // Add null terminator at the end

    // Output the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}
