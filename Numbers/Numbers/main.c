#include <stdlib.h>
#include <stdio.h>

int main() {

	int num1 = 0, num2 = 0, sol = 0, mult = 0, cont = 1;
	printf("Write the first number to multiply:");
	scanf_s("%i", &num1);
	printf("Write the second number to multiply:");
	scanf_s("%i", &num2);
	sol = num1;
	do {
		
		sol += num1;
		++cont;
	} while (num2 != cont);

	printf("The result of multiplication is: %i", sol);
	system("pause");
	return 0;
}