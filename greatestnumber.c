#include<stdio.h>
int main(){

//Question: Find the greatest number from three numbers using if-else

//Created three integer variables to store the values.
int a,b,c;

/*Getting the input from the user. 
You can also use values while declaring the variables.
*/

printf("Enter the first number: ");
scanf("%d", &a);

printf("Enter the second number: "); 
scanf("%d", &b);

printf("Enter the third number: ");
scanf("%d", &c);

//Logic

if(a>b && a>c){
	printf("%d is the greatest number",a);
	}

else if(b>a && b>c){

	printf("%d is the greatest number", b);
	}
else if(c>a && c>b){
	printf("%d is the greatest number", c);
	}
else{
	printf("ERROR.");
}

return 0;
}
