#include<stdio.h>

int main ()
{
	int number;

	printf("Please enter a number correspoding to the month (1-12): ");
	scanf("%d", &number);

	if (number == 1 || number==3 || number==5 || number==7 || number==9 || number==11) {
		printf("31 Days\n");
	}

	else if (number == 4 || number==6 || number==8 || number==10 || number==12) {
		printf("30 Days\n");
	}	

	else if (number == 2) {
		printf("28 or 29 Days depending on leap year existence\n");
	}

	return 0;
}