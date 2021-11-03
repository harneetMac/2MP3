#include <stdio.h>
#include <string.h>
#define stock 100

struct groceryStore{
	char 	itemName[150];
	int 	itemQty;
	float 	itemCost;
}produce[stock], deli[stock], bakery[stock], frozenFoods[stock];

void addAnItem();
void changeQty();
void changeCost();
void outputInventory();

int main()
{
	int input = 0;

	puts("\n\t\t**********************\n\t\t**********************");
	puts("This program helps in updating and keeping track of inventory at a grocery store");
	
	mainMenu:
	//creating a loop to get a user input
	do {
		puts("\t^^^^MAIN MENU^^^^");
		puts("1	-	Add an item to inventory");
		puts("2	-	Change the quantity of an item in inventory");
		puts("3	-	Change the cost of an item in inventory");
		puts("4	-	Output inventory to file");
		puts("5	-	Exit program\n");

		printf("=> Please select one of the above-listed options, \nby entering the integer besides it: ");
		scanf("%d", &input);

		if (input >= 1 && input <=5)		//condition if user enters an interger out of range
			{
			if 	(input == 1)				//condition to enter subsequent department levels
				{
					int subInput = 0;

					do{
						puts("\nNow, you are in the 'Add An Item' in a department section\n");
						puts("1	-	Add item to produce inventory");
						puts("2	-	Add item to deli inventory");
						puts("3	-	Add item to bakery inventory");
						puts("4	-	Add item to frozen food inventory\n");
						puts("0	-	To go back to the main menu page");

						printf("=> Please select one of the following departments to add an item: ");
						scanf("%d", &subInput);

						static int produce_index = 0, deli_index = 0, bakery_index = 0, frozenFood_index = 0;

						switch (subInput)
						{
							case 1:
								addAnItem(produce, "produce", produce_index);
								produce_index++;
								break;
							case 2:
								addAnItem(deli, "deli", deli_index);
								deli_index++;
								break;
							case 3:
								addAnItem(bakery, "bakery", bakery_index);
								bakery_index++;
								break;
							case 4:
								addAnItem(frozenFoods, "Frozen Foods", frozenFood_index);
								frozenFood_index++;
								break;
							case 0:
								goto mainMenu;
								break;
							default:
								puts("!!!Please enter a valid input");
								break;
						}
					} while (subInput);	
				}

			else if (input == 2)
				changeQty();
			else if (input == 3)
				changeCost();
			else if (input == 4)
				outputInventory();
			else
				{
					puts("The program is exiting now...");
					return 0;
				}
			}
		else
			puts ("\n!!!!Please select a valid number between 1 and 5");	
	}while (1);

	return 0;	
}

void addAnItem(struct groceryStore fDepartment[], char section[50], int index)
{
	char 	Name[stock];
	int 	Quantity;
	float 	Cost;

	printf("Please enter the name of the item that you would like to add in the %s department: ", section);
	scanf(" %[^\n]s", Name);
	printf("Enter quantity of %s: ", Name);
	scanf("%d", &Quantity);
	printf("Enter cost of %s: ", Name);
	scanf("%f", &Cost);

	//storing values in the inventory
	strcpy(fDepartment[index].itemName, Name);
	fDepartment[index].itemQty = Quantity;
	fDepartment[index].itemCost = Cost;
}

void changeQty()
{
	printf("changeQty\n");
}
void changeCost()
{
	printf("changeCost\n");
}
void outputInventory()
{
	printf("outputInventory\n");
}