#include<stdio.h>

int main()
{
	int Year;

	printf("Please enter a whole value to check for leap year\n");
	scanf("%d", &Year);

	if (Year%400 == 0){
		printf("Leap Year\n");}

	else if (Year%100 == 0){
		printf("Not a leap year\n");}

	else if (Year%4 == 0){
		printf("Leap Year\n");}

	else{
		printf("Not a leap year\n");}

	return 0;		
}