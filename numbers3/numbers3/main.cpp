#include <stdio.h>
#include <stdlib.h>

int main() {
	int numberUser = 0;
	char letterUser;
	int d = 1;

	printf("Write an integer number:");
	scanf_s("%i", &numberUser);



	do {
	
		getchar();
		printf(" a. Increment \n b. Decrement\n c.Power of two \n d.Quit Program\n");
		printf("Which operator will you use? (a/b/c or d):");
		scanf_s("%c", &letterUser);
		getchar();
	
		switch (letterUser) {
		case 'a':
			printf("%i", ++numberUser);
			getchar();

			break;
		case 'b':
			printf("%i", --numberUser);
			getchar();
			break;
		case 'c':
			printf("%i", numberUser*numberUser);
			getchar();
			break;

		case 'd':
			d = 0;
			break;
		default:
			break;
		}

	} while (d); {

	}
	system("pause");
	return 0;
}