#include<stdio.h>

int add(int a, int b){
return a + b;
}
int sub(int a, int b){
return a - b;
}
int mul(int a, int b){
return a * b;
}
float div(float a, float b){
return a/b;

}


int main(){

int sum = add(2,6);
printf("%d",sum);

int subtraction = sub(10,5);
printf("\n%d", subtraction);

int multiplication = mul(10,5);
printf("\n%d", multiplication);

float division = div(13,7);
printf("\n%f", division);

return 0;
}
