#include<stdio.h> 
int main(){
/*

Question: Accept a student's marks for five subjects and compute
his/her result. The student is passing if he/she scores marks
equal to and above 40 in each course. If the student scores
an aggregate greater than 75%, then the grade is
distinguished. If the aggregate is between 60% and 75%,
the grade is first division. If the aggregate is between 50%
and 60%, the grade is second division. If the aggregate is
between 40% and 50%, the grade is third division.


*/
int maths,chem,bxe,fpl,graphics;

printf("Enter your marks in Maths:\n");
scanf("%d",&maths);

printf("Enter your marks in chemistry\n");
scanf("%d",&chem);

printf("Enter your makrs in BXE\n");
scanf("%d",&bxe);

printf("Enter your marks in FPL\n");
scanf("%d",&fpl);

printf("Enter your marks in Graphics\n");
scanf("%d",&graphics);

float total_marks = maths + chem + bxe + fpl + graphics;
float percentage = total_marks/500*100;
printf("Your total marks: %.2f\nPercentage: %.3f\nYour grade: ",total_marks, percentage);
if(maths >= 40 && chem >= 40 && bxe >= 40 && fpl >= 40 && graphics >= 40){
	if(percentage >= 75){
		printf("Distinguished.\n");
		}
	else if(percentage >= 60 && percentage < 75){
		printf("A\n");
		}
	else if(percentage >= 50 && percentage < 60){
		printf("2nd Div\n");
		}
	else if(percentage >= 40 && percentage < 40){
		printf("3rd Div\n");
		}
	}
else{
	printf("Fail.\n");
	}
return 0;
}
