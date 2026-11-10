
#include <stdio.h>

/**
 * main - Simple calculator with arithmetic operations.
 *
 * All calculations use double to support decimal results.
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;
	double a, b;

	printf("Simple Calculator\n");

	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
		{
			printf("Invalid choice\n");
			return (1);
		}

		if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				return (1);

			printf("B: ");
			if (scanf("%lf", &b) != 1)
				return (1);

			if (choice == 1)
				printf("Result: %g\n", a + b);
			else if (choice == 2)
				printf("Result: %g\n", a - b);
			else if (choice == 3)
				printf("Result: %g\n", a * b);
			else if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %g\n", a / b);
		}
		else if (choice == 0)
			printf("Bye!\n");
		else
			printf("Invalid choice\n");

	} while (choice != 0);

	return (0);
}

