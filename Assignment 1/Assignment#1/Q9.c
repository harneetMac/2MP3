#include<stdio.h>

int main()
{
	int n, i;

	printf("Please enter a number (<= 10) to create a square pattern\n");
	scanf("%d", &n);


	for (i=1; i<=n; i++)
		{
			for (int j = 1; j<=n; j++)
				{
					printf("*");
				}
			printf("\n");
		} 
	return 0;	
}