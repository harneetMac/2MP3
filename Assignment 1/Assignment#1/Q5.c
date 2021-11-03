#include<stdio.h>

int main()
{
	int a, b, c;

	printf("Please enter 3 numbers to arrange them in descending order\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);


	if (a==b && b==c){
		printf("All numbers are equal\n");}

	else if (a>b && a>c){
		if (b>c){
			printf("%d is the largest number, followed by %d and %d\n", a,b,c);}

		else {printf("%d is the largest number, followed by %d and %d\n", a,c,b );}	
	}

	else if (b>a && b>c){
		if (a>c){
			printf("%d is the largest number, followed by %d and %d\n", b,a,c);}

		else {printf("%d is the largest number, followed by %d and %d\n", b,c,a );}	
	}

	else if (c>b && c>a){
		if (b>a){
			printf("%d is the largest number, followed by %d and %d\n", c,b,a);}

		else {printf("%d is the largest number, followed by %d and %d\n", c,a,b );}	
	}


	else {
		printf("Please enter valid numbers\n");}
	
	return 0;
}