#include <stdio.h>

int main()
{
	int percent;

	printf("Please enter course percentage to be converted into 12-point grading scale:\n");
	scanf("%d", &percent);

	if (percent>=0 && percent<=49){
		printf("Your grade in this course is 0\n");}

	else if (percent>=50 && percent<=52){
		printf("Your grade in this course is 1\n");}

	else if (percent>=53 && percent<=56){
		printf("Your grade in this course is 2\n");}
	
	else if (percent>=57 && percent<=59){
		printf("Your grade in this course is 3\n");}
	
	else if (percent>=60 && percent<=62){
		printf("Your grade in this course is 4\n");}

	else if (percent>=63 && percent<=66){
		printf("Your grade in this course is 5\n");}

	else if (percent>=67 && percent<=69){
		printf("Your grade in this course is 6\n");}

	else if (percent>=70 && percent<=72){
		printf("Your grade in this course is 7\n");}

	else if (percent>=73 && percent<=76){
		printf("Your grade in this course is 8\n");}

	else if (percent>=77 && percent<=79){
		printf("Your grade in this course is 9\n");}

	else if (percent>=80 && percent<=84){
		printf("Your grade in this course is 10\n");}

	else if (percent>=85 && percent<=89){
		printf("Your grade in this course is 11\n");}

	else if (percent>=90 && percent<=100){
		printf("Your grade in this course is 12\n");}

	else {
		printf("Please enter a valid percent value between 0 and 100\n");}

}