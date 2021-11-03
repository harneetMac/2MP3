#include <stdio.h>

void loadValues ();
void Subtract ();
void Print ();
void transpose ();
void rank ();

void main () 
{	
	int m, n, input; 	
	int r, c;

	printf("\nThis program performs arithmetic operations on two matrices (A & B):\n");
	printf("Consider (m) to be number of rows and (n) to be number of columns,\n");
	printf("Please enter m-th dimension for the first matrix (A): ");
	scanf("%d", &m);
	printf("Please enter n-th dimension for the first matrix (A): ");
	scanf("%d", &n);

	printf("\nSimilarly, provide the m-th dimension of the second matrix (B): ");
	scanf("%d", &r);
	printf("Provide the n-th dimension of the second matrix (B): ");
	scanf("%d", &c);

	int mat_A[m][n]; int mat_B[r][c];

	do {
	printf("\n\nPlease select one of the following to perform appropriate action:\n");
	printf("1 - Load Values in the Matrix (A or B)\n");
	printf("2 - Subtract matrices (A-B or B-A)\n");
	printf("3 - Print matrix (A or B)\n");
	printf("4 - Transpose matrix (A or B)\n");
	printf("5 - Rank of matrix (A or B)\n");
	printf("6 - Exit\n");
	printf("Please enter corresponding numerical value for the selected option: ");
	scanf("%d", &input);

	if (input == 1) {loadValues (m, n, r, c, mat_A, mat_B);}
	if (input == 2) {Subtract (m, n, r, c, mat_A, mat_B);}
	if (input == 3) {Print (m, n, r, c, mat_A, mat_B);}
	if (input == 4) {transpose (m, n, r, c, mat_A, mat_B);}
	if (input == 5) {rank(m, n, r, c, mat_A, mat_B);}
	} while (input != 6);
}


void loadValues (int m, int n, int r, int c, int mat_A[m][n], int mat_B[r][c]){
	int mat;
	puts ("This part of the program lets you populate a particular matrix");
	printf("Please specify which matrix needs to be loaded (1 for A or 2 for B): ");
	scanf("%d", &mat);

	if (mat == 1){
		int x = -1;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				printf("Enter the value of A[%dx%d] element: ", (i+1), (j+1));
				scanf("%d", &x);
				mat_A[i][j] = x;
			}
		}
	}
	else if (mat == 2){
		int x = -1;
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				printf("Enter the value of B[%dx%d] element: ", (i+1), (j+1));
				scanf("%d", &x);
				mat_B[i][j] = x;
			}
		}
	}
	else {puts("!!!Please enter a valid number (1 for matrix A or 2 for matrix B)");}
}


void Subtract (int m, int n, int r, int c, int mat_A[m][n], int mat_B[r][c]){
	int num;
	puts("This part of the program performs subtraction on equi-dimensional matrices:");
	printf("Please enter 1 for (A-B) operation\nOR enter 2 for (B-A) operation: ");
	scanf("%d", &num);

	if ((m == r) && (n == c)){
		if (num == 1) {
			puts("Following is the result of the applied operation:");
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++){
					printf("%6d", (mat_A[i][j] - mat_B[i][j]));
				}
			printf("\n");
			}
		}	

		else if (num == 2) {
			puts("Following is the result of the applied operation:");
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++){
					printf("%6d", (mat_B[i][j] - mat_A[i][j]));
				}
			printf("\n");
			}
		}
		
		else {puts("!!!Invalid input");}		
	}

	else {puts("!!!Rows and Columns of the matrices must be equal");}
}	


void Print (int m, int n, int r, int c, int mat_A[m][n], int mat_B[r][c]){
	puts ("\nThis part of the program prints a user-required matrix:");
	int num;

	printf("Please enter '1' to view matrix A\nOR enter '2' to view matrix B: ");
	scanf("%d", &num);

	if (num == 1) {
		for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++){
					printf("%6d", mat_A[i][j]);
				}
		printf("\n");
		}
	}

	else if (num == 2) {
		for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++){
					printf("%6d", mat_B[i][j]);
				}
		printf("\n");
		}
	}

	else {puts("!!!Please enter a valid matrix");}
}


void transpose (int m, int n, int r, int c, int mat_A[m][n], int mat_B[r][c]) {
	puts ("\nThis part of the program computes transpose of a specified matrix:");
	int num;

	printf("Please enter '1' to transpose matrix A\nOR enter '2' to transpose matrix B: ");
	scanf("%d", &num);

	if (num == 1) {
		for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++){
					printf("%8d", mat_A[j][i]);
				}
		printf("\n");
		}
	}

	else if (num == 2) {
		for (int i = 0; i < c; i++) {
				for (int j = 0; j < r; j++){
					printf("%8d", mat_B[j][i]);
				}
		printf("\n");
		}
	}

	else {puts("!!!Please enter a valid number");}
}


void rank (int m, int n, int r, int c, int mat_A[m][n], int mat_B[r][c]) {
	puts ("\nThis part of the program determines the rank of a 2x2 matrix:");
	int num;

	printf("Please enter '1' to determine the rank of matrix A\nOR enter '2' for matrix B: ");
	scanf("%d", &num);

	if (num == 1){
		int determinant = (((mat_A[0][0]) * (mat_A[1][1])) - ((mat_A[0][1]) * (mat_A[1][0])));

		if (determinant) { puts ("Rank of matrix A is 2");}

		else {puts ("Rank of matrix A is 1");}
	}

	else if (num == 2){
		int determinant = (((mat_B[0][0]) * (mat_B[1][1])) - ((mat_B[0][1]) * (mat_B[1][0])));

		if (determinant) { puts ("Rank of matrix B is 2");}

		else {puts ("Rank of matrix B is 1");}
	}

	else {puts("!!!Please enter a valid digit");}
}