#include<stdio.h>

int main ()
{
	double dollar;
	int cents, quarters, x, dimes, y, nickels, pennies;

	printf("Enter an amount (denoting the cents-use decimal point) to calculate the change:\n");
	scanf("%lf", &dollar);

	cents = (dollar*100);

	while (cents/25 >= 1){
		quarters = cents/25;
		break;
	}
	while (cents/25 < 1){
		quarters = 0;
		break;
	}
	x = cents - (quarters * 25);

	while (x/10 >= 1){
		dimes = x/10;
		break;
	}
	while (x/10 < 1){
		dimes = 0;
		break;
	}
	y = x - (dimes * 10);

	while (y/5 >= 1){
		nickels = y/5;
		break;
	}
	while (y/5 < 1){
		nickels = 0;
		break;
	}

	pennies = y - (nickels*5);

	printf("To create $%.2f in change use %d quarters, %d dimes, %d nickels and %d pennies\n", dollar, 
		quarters, dimes, nickels, pennies);
	
}