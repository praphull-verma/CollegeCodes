#include<stdio.h>
#include<string.h>

int main(){

char string1[] = "hello";
char string2[] = " world";

//To find the length of strings
int len = strlen(string1);
printf("%d",len); 

//To concatenate two strings
strcat(string1, string2);
printf("%s\n", string1);

//To compare strings
int comparison = strcmp(string1, string2);
printf("%d\n", comparison);

//To copy one strings from another
strcpy(string1, string2);
printf("%s", string2);




return 0;
	}
