#include <stdio.h>
#include <stdlib.h>

void FirstShipCoordinates();
void SecondShipCoordinates();
void ThirdShipCoordinates();

int turn = 1;

void main (){
	puts("**************************************************************************");
	puts("\nThis program enables users to play a game of battleship on 10x10 boards:\n");
	puts("Both players will get a chance to input the coordinates for their ships");
	puts("on the following board: \n");

	int board_1[10][10] = {0};
	int board_2[10][10] = {0};

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){

			if (i == 0 && j == 0){
				printf("    ");
				for (int num = 0; num < 10; num++){
					printf("%4d", num);
				}
			printf("\n");
			}

			if (i == 0 && j ==0) {printf("%4d", board_1[i][j]);}

			if (i != 0 && j == 0){
				printf("%4d", i);
			}

			printf("%4d", board_1[i][j]);	

		} 

	printf("\n");

	}
	puts ("\nFirst player should get ready to place their ships on the board:");

	FirstShipCoordinates(board_1);
	
	SecondShipCoordinates(board_1);
	
	ThirdShipCoordinates(board_1);
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){

			if (i == 0 && j == 0){
				printf("    ");
				for (int num = 0; num < 10; num++){
					printf("%4d", num);
				}
			printf("\n");
			}

		if (i == 0 && j ==0) {printf("%4d", board_1[i][j]);}

		if (i != 0 && j == 0){
			printf("%4d", i);
		}

		printf("%4d", board_1[i][j]);	

		} 

	printf("\n");

	}
	puts("In the above-shown grid, '7' marks the locations of your ships");
	puts("Before following the next command, please verify the locations of your ships");

	char ch;
	LOOP: printf("Press 'Y' or 'y' to clear the screen: ");
	scanf(" %c", &ch);
	if (ch == 'Y' || ch == 'y'){
		system("clear");
	}
	else {goto LOOP;} 

	FirstShipCoordinates(board_2);
	
	SecondShipCoordinates(board_2);
	
	ThirdShipCoordinates(board_2);
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){

			if (i == 0 && j == 0){
				printf("    ");
				for (int num = 0; num < 10; num++){
					printf("%4d", num);
				}
			printf("\n");
			}

		if (i == 0 && j ==0) {printf("%4d", board_2[i][j]);}

		if (i != 0 && j == 0){
			printf("%4d", i);
		}

		printf("%4d", board_2[i][j]);	

		} 

	printf("\n");
	}

	puts("In the above-shown grid, '7' marks the locations of your ships");
	puts("Before following the next command, please verify the locations of your ships");

	char ch2;
	LOOP2: printf("Press 'Y' or 'y' to clear the screen: ");
	scanf(" %c", &ch2);
	if (ch2 == 'Y' || ch2 == 'y'){
		system("clear");
	}
	else {goto LOOP2;}

	printf("Now, the guessing game starts:\n");

	int hitCountPlayer1 = 0;
	int hitCountPlayer2 = 0;
	int guessingBoard_1[10][10] = {{0}};
	int guessingBoard_2[10][10] = {{0}};

	while ((hitCountPlayer1 < 12) && (hitCountPlayer2 < 12)){
		int guess_depth = 10, guess_width = 10;
		int guess_depth2 = 10, guess_width2 = 10;

		OverlapCheckConfirmed:;
		puts("PLAYER 1, enter your guessing coordinate:");
		printf("Please enter the depth/vertical location of your opponents' ship (0-9): ");
		scanf("%d", &guess_depth);

		printf("Please enter the width/horizontal location of your opponents' ship (0-9): ");
		scanf("%d", &guess_width);

		if (guessingBoard_2[guess_depth][guess_width] == 1 || guessingBoard_2[guess_depth][guess_width] == 4){
			puts("Already used these coordinates, please try again...");
			goto OverlapCheckConfirmed;
		}
		else{
			if (board_2[guess_depth][guess_width] == 7){
				hitCountPlayer1 += 1;
				puts(":)You have just hit the opponents ship ('1' denotes the correctly guessed location)");
				guessingBoard_2[guess_depth][guess_width] = 1;
				for (int a = 0; a < 10; a++){
					for (int b = 0; b < 10; b++){
							if (a == 0 && b == 0){
							printf("    ");
							for (int num1 = 0; num1 < 10; num1++){
								printf("%4d", num1);
							}
						printf("\n");
						}
					if (a == 0 && b ==0) {printf("%4d", a);}
					if (a != 0 && b == 0){
						printf("%4d", a);
					}
					printf("%4d", guessingBoard_2[a][b]);	
					} 
				printf("\n");
				}
			}
			else {
				puts("Too bad, your guess was wrong, please hand over the control to the other player now...");
				puts("'4' denotes the failed attempt to detect the ships' location");
				guessingBoard_2[guess_depth][guess_width] = 4;
				for (int a = 0; a < 10; a++){
					for (int b = 0; b < 10; b++){
							if (a == 0 && b == 0){
							printf("    ");
							for (int num1 = 0; num1 < 10; num1++){
								printf("%4d", num1);
							}
						printf("\n");
						}
					if (a == 0 && b ==0) {printf("%4d", a);}
					if (a != 0 && b == 0){
						printf("%4d", a);
					}
					printf("%4d", guessingBoard_2[a][b]);	
					} 
				printf("\n");
				}
			}
		}

		puts("\nPlease hand over the keyboard to PLAYER 2");
		OverlapCheckConfirmed2:;
		printf("Please enter the depth/vertical location of your opponents' ship (0-9): ");
		scanf("%d", &guess_depth2);

		printf("Please enter the width/horizontal location of your opponents' ship (0-9): ");
		scanf("%d", &guess_width2);

		if (guessingBoard_1[guess_depth2][guess_width2] == 1 || guessingBoard_1[guess_depth2][guess_width2] == 4){
			puts("Already used these coordinates, please try again...");
			goto OverlapCheckConfirmed2;
		}
		else{
			if (board_1[guess_depth2][guess_width2] == 7){
				hitCountPlayer2 += 1;
				puts("\n:)You have just hit the opponents ship ('1' denotes the correctly guessed location)");

				guessingBoard_1[guess_depth2][guess_width2] = 1;
				for (int a = 0; a < 10; a++){
					for (int b = 0; b < 10; b++){
							if (a == 0 && b == 0){
							printf("    ");
							for (int num1 = 0; num1 < 10; num1++){
								printf("%4d", num1);
							}
						printf("\n");
						}
					if (a == 0 && b ==0) {printf("%4d", a);}
					if (a != 0 && b == 0){
						printf("%4d", a);
					}
					printf("%4d", guessingBoard_1[a][b]);	
					} 
				printf("\n");
				}
			}
			
			else {
				puts("\nToo bad, your guess was wrong, please hand over the control to the other player now...");
				puts("'4' denotes the failed attempt to detect the ships' location");
				guessingBoard_1[guess_depth2][guess_width2] = 4;
				for (int a = 0; a < 10; a++){
					for (int b = 0; b < 10; b++){
							if (a == 0 && b == 0){
							printf("    ");
							for (int num1 = 0; num1 < 10; num1++){
								printf("%4d", num1);
							}
						printf("\n");
						}
					if (a == 0 && b ==0) {printf("%4d", a);}
					if (a != 0 && b == 0){
						printf("%4d", a);
					}
					printf("%4d", guessingBoard_1[a][b]);	
					} 
				printf("\n");
				}
			}
		}
	}	

	if (hitCountPlayer1 == 12) {puts("\n!!!!!!!!Congrats, Player 1 have won the game!!!!!!!!");}
	else {puts("\n!!!!!!!!Congrats, Player 2 have won the game!!!!!!!!");}
}

void FirstShipCoordinates(int shipOne[10][10]){

	printf("\n****Now, the display screen must be facing Player #%d only****\n", turn);
	puts("****Dimensions of the first ship are 1 X 5****\n");

	depthWidthloop:;
	int depth = 10, width = 10;

	while ((depth < 0 || depth > 9) && (width < 0 || width > 9)) {
		printf("Please enter the depth/vertical location of the first ship (0-9): ");
		scanf("%d", &depth);

		printf("Please enter the width/horizontal location of the first ship (0-9): ");
		scanf("%d", &width);
	}

	printf("\nPlease select one of the following options (The ship will\n");
	printf("be oriented accordingly):\n1.(Vertical)\t  ");

	int d = depth;
	int w = width;

	unsigned int depth_limit = depth + 5;
	unsigned int width_limit = width + 5;

	
	for (d; d < depth_limit; d++){
		printf("%d,%d; ", d, width);
	}

	printf("\n2.(Horizontal)\t  ");

	for (w; w < width_limit; w++){
		printf("%d,%d; ", depth, w);
	} printf("\n");

	if (depth_limit > 10 || width_limit > 10) {
		puts("!!!Your 1X5 ship will not fit at this location (grid limit is 0 to 9), please try again"); 
		goto depthWidthloop;
	}

	int orientation;

	loop1: printf("Please select one of the above-written options (1-Vertical or 2-Horizontal): ");
	scanf("%d", &orientation);

	if (orientation == 1){
		for (int x = depth; x < (depth + 5); x++){
			shipOne[x][width] = 7;
		}
	}

	else if (orientation == 2){
		for (int x = width; x < (width + 5); x++){
			shipOne[depth][x] = 7;
		}
	}	

	else {
		puts ("!!!Please select a valid input");
		goto loop1;
	}
	turn += 1;	
}		

void SecondShipCoordinates (int shipTwo[10][10]){
	puts("\n****Dimensions of the second ship are 1 X 3****\n");
	int depth = 10, width = 10;
	int countCheckVertical = 0, countCheckHorizontal = 0;

	loop2: do {
	depth = 10, width = 10;

	while ((depth < 0 || depth > 9) && (width < 0 || width > 9)) {
		printf("Please enter the depth/vertical location of the second ship (0-9): ");
		scanf("%d", &depth);

		printf("Please enter the width/horizontal location of the second ship (0-9): ");
		scanf("%d", &width);
	}
	} while (shipTwo[depth][width] == 7);

	printf("\nPlease select one of the following options (The ship will\n");
	printf("be oriented accordingly):\n1.(Vertical)\t  ");

	int d = depth;
	int w = width;

	unsigned int depth_limit = depth + 3;
	unsigned int width_limit = width + 3;

	for (d; d < depth_limit; d++){
		printf("%d,%d; ", d, width);
		if (shipTwo[d][width] == 7){
			puts("\n!!!Vertical orientation not possible, because ship-one holds this place\n");
			countCheckVertical += 1;
			goto skipDueToOverlap;
			}
	}

	skipDueToOverlap:;

	printf("\n2.(Horizontal)\t  ");

	for (w; w < width_limit; w++){
		printf("%d,%d; ", depth, w);
		if (shipTwo[depth][w] == 7){
			puts("\n!!!Horizontal orientation not possible, because ship-one holds this place\n");
			countCheckHorizontal += 1;
			char answer;
			printf("\nPlease enter 'Y' or 'y' to make a selection for vertical orientation");
			printf("\nOR enter 'N' or 'n' to try new depth & width values: ");
			scanf(" %c", &answer);
			if (answer == 'N' || answer == 'n'){
				goto loop2;}
		}
	}	

	if (depth_limit > 10 || width_limit > 10) {
		puts("!!!Your 1X3 ship will not fit at this location (grid limit is 0 to 9), please try again"); 
		goto loop2;
	}

	int orientation;

	loop3: printf("\nPlease select one of the above-written options (1-Vertical or 2-Horizontal): ");
	scanf("%d", &orientation);

	if (orientation == 1){
		if (countCheckVertical == 1) {goto loop2;}

		for (int x = depth; x < (depth + 3); x++){
			shipTwo[x][width] = 7;
		}
	}

	else if (orientation == 2){
		if (countCheckHorizontal == 1) {goto loop2;}
		for (int x = width; x < (width + 3); x++){
			shipTwo[depth][x] = 7;
		}
	}

	else {
		puts ("!!!Please select a valid input");
		goto loop3;
	}
}

void ThirdShipCoordinates (int shipThree[10][10]){
	puts("\n****Dimensions of the third ship are 1 X 4****\n");
	int depth = 10, width = 10;
	int countCheckHorizontal = 0, countCheckVertical = 0;

	loop4: do {
	depth = 10, width = 10;
	
	while ((depth < 0 || depth > 9) && (width < 0 || width > 9)) {
		printf("Please enter the depth/vertical location of the third ship (0-9): ");
		scanf("%d", &depth);

		printf("Please enter the width/horizontal location of the third ship (0-9): ");
		scanf("%d", &width);
	}
	} while (shipThree[depth][width] == 7);

	printf("\nPlease select one of the following options (The ship will\n");
	printf("be oriented accordingly):\n1.(Vertical)\t  ");

	int d = depth;
	int w = width;

	unsigned int depth_limit = depth + 4;
	unsigned int width_limit = width + 4;

	for (d; d < depth_limit; d++){
		printf("%d,%d; ", d, width);
		if (shipThree[d][width] == 7){
			puts("\n!!!Please try a new coordinate value, because ship-one/two holds this place\n");
			goto loop4;
		}
	}

	printf("\n2.(Horizontal)\t  ");

	for (w; w < width_limit; w++){
		printf("%d,%d; ", depth, w);
		if (shipThree[depth][w] == 7){
			puts("\n!!!Please try a new coordinate value, because ship-one/two holds this place\n");
			goto loop4;
		}
	} printf("\n");

	if (depth_limit > 10 || width_limit > 10) {
		puts("!!!Your 1X4 ship will not fit at this location (grid limit is 0 to 9), please try again"); 
		goto loop4;
	}

	int orientation;

	loop5:;
	printf("Please select one of the above-written options (1-Vertical or 2-Horizontal): ");
	scanf("%d", &orientation);

	if (orientation == 1){
		for (int x = depth; x < (depth + 4); x++){
			shipThree[x][width] = 7;
		}
	}

	else if (orientation == 2){
		for (int x = width; x < (width + 4); x++){
			shipThree[depth][x] = 7;
		}
	}

	else{
		puts ("!!!Please select a valid input");
		goto loop5;
	}
}