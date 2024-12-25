#include<stdio.h>
int main(){
		
/* Problem statement:
 
Write a C program to check the number entered is positive or negative and 
display message accordingly. */

	
int i;
printf("Enter the number: ");
scanf("%d", &i);
if(i < 0){
	printf("The number is negative.\n");
	}
else if(i > 0){
	printf("The number is positive.\n");
	}
else{
	printf("Zero is neither positive nor negative.\n");
	}

return 0;
}
