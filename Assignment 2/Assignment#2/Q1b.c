#include <stdio.h>

void main ()
{
	int rows, dash;

	printf("This program displays a diamond pattern with user defining the number of rows: \n");
	printf("Please an interger between 1 and 10 to create a pattern: ");
	scanf("%d", &rows);

	int i = 1; 
	dash = rows - 1;

	do {
		int j = 1;
		if (i == rows)
			{	do {
					break;
					printf(" ");
				} while (++j <= dash);
			}	

		else {
			do {
					printf(" ");
				} while (++j <= dash);	
			}	

		dash--;
		int k = 1;

		do {
			printf("*");
		} while (++k<=(2*i)-1);

		printf("\n");
	} while (++i <= rows);

	int s = 1; 
	dash = 1;

	do {
		int f = 1;
		do {
			printf(" ");
		} while (++f <= dash);

		dash++;
		int g = 1;

		do {
			printf("*");
		} while (++g <= (2*(rows-s))-1);

		printf("\n");
	} while (++s < rows);
}	