#include<stdio.h>

int main(){


//If else loop

int a;
printf("Enter A:\n");
scanf("%d", &a);

 if(a<0){
	printf("\nA is negative\n");
	}
else if(a>0){
	printf("\nA is positive\n");
}
else{
	printf("\nA is 0\n");
}


//For loop
printf("PRINTING USING FOR LOOP\n");
for(int i = 0; i<=10; i++){
	printf("%d\n",i);
}


//While loop
int b = 0;
printf("PRINTING USING WHILE LOOP\n");

while(b<=10){
	printf("%d\n",b);
	b++;
}

//do-while loop

printf("PRINTING USING DO WHILE LOOP\n");

int c = 0;
do{
printf("%d\n",c);
c++;
}while(c<=10);

return 0;
}
