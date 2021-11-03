#include<stdio.h>

int main()
{
	int n, c;
	int a=0, b=1;

	printf("Please enter a number to compute the Fibonacci sequence:");
	scanf("%d", &n);

	printf("%d, %d", a, b);

	for (int i=0; i<n-2; i++)
		{
			c = a + b;
			printf(", %d", c);

			a = b;
			b = c;
		}
	printf("\n");
	return 0;	
}