#include<stdio.h>

int main()
{
	int x, c;

	printf("Please enter a positive integer to calculate factorial\n");
	scanf("%d", &x);
	c = x;

	if (x==0){
		printf("Enter a non-zero number:");}

	else
		{while (x>1)
			{ c = c*(x-1);
			x--;}

		printf("%d is the factorial\n", c);
	}
	return 0;
}