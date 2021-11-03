#include <stdio.h>

void main ()
{
	double value;

	printf("This program coverts a 12 point grade scale to a 4 point grade scale\n");
	printf("Please enter the GPA to be converted: ");
	scanf("%lf", &value);	

	int GPA_12 = value*100/10;

	switch (GPA_12) {
		case 120:
		case 119:
		case 118:
		case 117:
		case 116:
		case 115:
		case 114:
		case 113:
		case 112:
		case 111:
		case 110:
		case 109:
			printf("4.0\n");
			break;

		case 108:
		case 107:
		case 106:
			printf("3.9\n");
			break;

		case 105:
		case 104:
		case 103:
			printf("3.8\n");
			break;

		case 102:
		case 101:
		case 100:
			printf("3.7\n");
			break; 	

		case 99:
		case 98:
		case 97:
			printf("3.6\n");
			break;	

		case 96:
		case 95:
		case 94:
			printf("3.5\n");
			break;	

		case 93:
		case 92:
		case 91:
			printf("3.4\n");
			break;

		case 90:
		case 89:
		case 88:
			printf("3.3\n");
			break;

		case 87:
		case 86:
		case 85:
			printf("3.2\n");
			break;	

		case 84:
		case 83:
		case 82:
			printf("3.1\n");
			break;	

		case 81:
		case 80:
		case 79:
			printf("3.0\n");
			break;

		case 78:
		case 77:
		case 76:
			printf("2.9\n");
			break;	

		case 75:
		case 74:
		case 73:
			printf("2.8\n");
			break;	

		case 72:
		case 71:
		case 70:
			printf("2.7\n");
			break;	

		case 69:
		case 68:
		case 67:
			printf("2.6\n");
			break;

		case 66:
		case 65:
		case 64:
			printf("2.5\n");
			break;	

		case 63:
		case 62:
		case 61:
			printf("2.4\n");
			break;	

		case 60:
		case 59:
		case 58:
			printf("2.3\n");
			break;	

		case 57:
		case 56:
		case 55:
			printf("2.2\n");
			break;

		case 54:
		case 53:
		case 52:
			printf("2.1\n");
			break;	

		case 51:
		case 50:
		case 49:
			printf("2.0\n");
			break;	

		case 48:
		case 47:
		case 46:
			printf("1.9\n");
			break;	

		case 45:
		case 44:
		case 43:
			printf("1.8\n");
			break;

		case 42:
		case 41:
		case 40:
			printf("1.7\n");
			break;		

		case 39:
		case 38:
		case 37:
			printf("1.6\n");
			break;	

		case 36:
		case 35:
		case 34:
			printf("1.5\n");
			break;	

		case 33:
		case 32:
		case 31:
			printf("1.4\n");
			break;

		case 30:
		case 29:
		case 28:
			printf("1.3\n");
			break;	

		case 27:
		case 26:
		case 25:
			printf("1.2\n");
			break;	

		case 24:
		case 23:
		case 22:
			printf("1.1\n");
			break;	

		case 21:
		case 20:
		case 19:
		case 18:
			printf("1.0\n");
			break;

		case 17:
		case 16:
			printf("0.9\n");
			break;		

		case 15:
		case 14:
		case 13:
			printf("0.8\n");
			break;	

		case 12:
		case 11:
		case 10:
			printf("0.7\n");
			break;	

		case 9:
			printf("0.6\n");
			break;

		case 8:
		case 7:
			printf("0.5\n");
			break;		

		case 6:
			printf("0.4\n");	
			break;

		case 5:
		case 4:
			printf("0.3\n");
			break;

		case 3:
			printf("0.2\n");
			break;	

		case 2:
		case 1:
			printf("0.1\n");
			break;

		case 0:
			printf("0.0\n");
			break;

		default:
			puts("Please enter a valid number");	
			break;							
	}
}