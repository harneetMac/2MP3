#include <stdio.h>

void main ()
{
	int rows, i, j, k, dash;

	printf("This program displays a diamond pattern with user defining the number of rows: \n");
	printf("Please an interger between 1 and 10 to create a pattern: ");
	scanf("%d", &rows);

	dash = rows - 1;

	for (i = 1; i<=rows; i++) {
		for (j = 1; j <= dash; j++) 
			printf(" ");

		dash--;	

		for (k = 1; k <= (2*i)-1; k++) {
			printf("*");}

		printf("\n");	
		}

	dash = 1;	

	for (i = 1; i<rows; i++){
		for (j=1; j<=dash; j++)
			printf(" ");

		dash++;

		for (k = 1; k<= ((2*(rows-i))-1); k++)	
			printf("*");

		printf("\n");
		}
}