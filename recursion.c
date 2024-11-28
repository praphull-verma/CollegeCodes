#include<stdio.h>

//Finding Factorial using recursion
long factorial(int n){
        if(n == 1 || n == 0){
		return 1;
		}
	else{
		return n * factorial(n-1);
		}
	}
int SumOfFirstnNaturalNumbers(int p){
	if(p == 1){
		return 1;
}	else{

	return p + SumOfFirstnNaturalNumbers(p-1);

		}
	}
int main(){
int n;
printf("Enter the number to find the factorial:\n");
scanf("%d", &n);
printf("Factorial is: %d", factorial(n));
printf("\nSum of first 5 natural number is: %d",  SumOfFirstnNaturalNumbers(5));

return 0;
}
