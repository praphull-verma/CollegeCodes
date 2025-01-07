#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student student; // Declare a variable of type Student

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name); // Use " %[^\n]" to read a string with spaces

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    // Display student details
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
