#include <stdio.h>
#include <math.h>

void main ()
{
	double value;

	printf("This program coverts a 12 point grade scale to a 4 point grade scale\n");
	printf("Please enter the GPA to be converted: ");
	scanf("%lf", &value);

	double GPA12 = roundf(value*10) / 10;

	if (10.9 <= GPA12 && GPA12<= 12.0) {
		printf("4.0\n");}

	else if (10.6 <= GPA12 && GPA12<= 10.8) {
		printf("3.9\n");}

	else if (10.3 <= GPA12 && GPA12 <= 10.5) {
		printf("3.8\n");}

	else if (10.0 <= GPA12 && GPA12 <= 10.2) {
		printf("3.7\n");}

	else if (9.7 <= GPA12 && GPA12 <= 9.9) {
		printf("3.6\n");}

	else if (9.4 <= GPA12 && GPA12 <= 9.6) {
		printf("3.5\n");}

	else if (9.1 <= GPA12 && GPA12 <= 9.3) {
		printf("3.4\n");}

	else if (8.8 <= GPA12 && GPA12 <= 9.0) {
		printf("3.3\n");}

	else if (8.5 <= GPA12 && GPA12 <= 8.7) {
		printf("3.2\n");}

	else if (8.2 <= GPA12 && GPA12<= 8.4) {
		printf("3.1\n");}

	else if (7.9 <= GPA12 && GPA12 <= 8.1) {
		printf("3.0\n");}

	else if (7.6 <= GPA12 && GPA12<= 7.8) {
		printf("2.9\n");}

	else if (7.3 <= GPA12 && GPA12 <= 7.5) {
		printf("2.8\n");}

	else if (7.0 <= GPA12 && GPA12 <= 7.2) {
		printf("2.7\n");}

	else if (6.7 <= GPA12 && GPA12 <= 6.9) {
		printf("2.6\n");}									

	else if (6.4 <= GPA12 && GPA12 <= 6.6) {
		printf("2.5\n");}

	else if (6.1 <= GPA12 && GPA12 <= 6.3) {
		printf("2.4\n");}	

	else if (5.8 <= GPA12 && GPA12 <= 6.0) {
		printf("2.3\n");}	

	else if (5.5 <= GPA12 && GPA12 <= 5.7) {
		printf("2.2\n");}	

	else if (5.2 <= GPA12 && GPA12 <= 5.4) {
		printf("2.1\n");}

	else if (4.9 <= GPA12 && GPA12 <= 5.1) {
		printf("2.0\n");}

	else if (4.6 <= GPA12 && GPA12 <= 4.8) {
		printf("1.9\n");}

	else if (4.3 <= GPA12 && GPA12 <= 4.5) {
		printf("1.8\n");}

	else if (4.0 <= GPA12 && GPA12 <= 4.2) {
		printf("1.7\n");}

	else if (3.7 <= GPA12 && GPA12 <= 3.9) {
		printf("1.6\n");}

	else if (3.4 <= GPA12 && GPA12 <= 3.6) {
		printf("1.5\n");}	

	else if (3.1 <= GPA12 && GPA12 <= 3.3) {
		printf("1.4\n");}	

	else if (2.8 <= GPA12 && GPA12 <= 3.0) {
		printf("1.3\n");}

	else if (2.5 <= GPA12 && GPA12 <= 2.7) {
		printf("1.2\n");}

	else if (2.2 <= GPA12 && GPA12 <= 2.4) {
		printf("1.1\n");}	

	else if (1.8 <= GPA12 && GPA12 <= 2.1) {
		printf("1.0\n");}

	else if (1.5 <= GPA12 && GPA12 <= 1.7) {
		printf("0.9\n");}

	else if (1.3 <= GPA12 && GPA12 <= 1.5) {
		printf("0.8\n");}

	else if (1.0 <= GPA12 && GPA12 <= 1.2) {
		printf("0.7\n");}

	else if (GPA12 == 0.9) {
		printf("0.6\n");}

	else if (0.7 <= GPA12 && GPA12 <= 0.8) {
		printf("0.5\n");}

	else if (GPA12 == 0.6) {
		printf("0.4\n");}

	else if (0.4 <= GPA12 && GPA12 <= 0.5) {
		printf("0.3\n");}

	else if (GPA12 == 0.3) {
		printf("0.2\n");}

	else if (0.1 <= GPA12 && GPA12 <= 0.2) {
		printf("0.1\n");}

	else if (GPA12 == 0.0) {
		printf("0.0\n");}

	else {printf("Please enter a valid GPA\n");}																				
}
