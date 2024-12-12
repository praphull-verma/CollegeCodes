#include<stdio.h>
int main(){

//Code by Praphull
//Fibonacci series - 0,1,1,2,3,5,8,13,21,34...

int n;
int first_number = 0;
int second_number = 1;
int output_number;
printf("Input the range of the series: ");
scanf("%d",&n);
printf("0 1 ");
for(int i = 0; i<n;){
	 output_number = first_number + second_number;
          if(output_number>=n){
        	break;
	}


       	 printf(" %d ", output_number);

         first_number = second_number;
         second_number = output_number;
}
return 0;

}
