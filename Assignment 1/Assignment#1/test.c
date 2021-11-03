#include<stdio.h>

int main ()
{
	float dollar;
	float cents;

	dollar = 0.11;
	cents = dollar*100;

	printf("%.0f\n", cents);

}