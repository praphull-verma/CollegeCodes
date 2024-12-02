#include<stdio.h>
int main(){

    float salary, HRA, DA;
    printf("Enter Your Salary\n");
    scanf("%f", &salary);

    HRA = salary * (20.0 / 100);
    DA = salary * (150.0 / 100);
    salary = salary + HRA + DA;

    printf("Your final salary is: %.2f\n", salary);

    return 0;
}

