#include <stdio.h>
#include <math.h>

void main ()
{
	float a, b, c; 
	double root_1, root_2;
	int x;

	printf("This program will calculate roots of ax+by+c=0 equation within required precision\n");
	
	printf("Please enter an a value: ");
	scanf("%f", &a);

	printf("Please enter a b value: ");
	scanf("%f", &b);

	printf("Please enter a c value: ");
	scanf("%f", &c);

	printf("Please enter an integer value of the number of decimal places: ");
	scanf("%d", &x);

	root_1 = (-b + sqrt((b*b) - 4*a*c))/(2*a);
	root_2 = (-b - sqrt((b*b) - 4*a*c))/(2*a);

		
	printf("The first root is located at %*.*lf ", 0, x, root_1);
	printf("and the second root is located at %*.*lf\n", 0, x, root_2);
}