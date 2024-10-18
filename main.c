#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int circle()
{
	double radius;
	double circumference;
	double area;

	printf("What is the circle's radius? ");
	scanf("%lf", &radius);

	circumference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);

	printf("\ncircumference = %lf\n", circumference);
	printf("area = %lf\n", area);

	return 0;
}

int hypotenuse()
{
	double A;
	double B;
	double C;

	printf("A = ");
	scanf("%lf", &A);

	printf("\nB = ");
	scanf("%lf", &B);

	C = sqrt(A * A + B * B);

	printf("\nC = %lf\n", C);

	return 0;
}

int ifStatements()
{
	int age;

	printf("What is your age? ");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("\nYou are signed up!\n");
	}
	else if (age == 0)
	{
		printf("\nYou can't sign up. you were just born!\n");
	}
	else if (age < 0)
	{
		printf("\nYou haven't been born yet!\n");
	}
	else
	{
		printf("\nMust be 18 or older.\n");
	}

	return 0;
}

int switchStatements()
{
	char grade;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("\nPerfect!\n");
		break;
	case 'B':
		printf("\nNot bad!\n");
		break;
	case 'C':
		printf("\nCould be better.\n");
		break;
	case 'D':
		printf("\nAt least it's not an F!\n");
		break;
	case 'F':
		printf("\nYOU FAILED!\n");
		break;
	default:
		printf("\nPlease enter only valid grades.\n");
		break;
	}

	return 0;
}

double square(double x)
{
	return x * x;
}

int findMax(int x, int y)
{
	return x > y ? x : y;
}

void hello(char[], int); // function prototype

void arrays()
{
	double prices[] = {5.00, 8.75, 7.99, 25.67};
	const int PRICES_SIZE = sizeof(prices) / sizeof(prices[0]);

	for (int i = 0; i < PRICES_SIZE; i++)
	{
		printf("$%.2lf\n", prices[i]);
	}
}

void arrayString()
{
	char games[][25] = {"Silent Hill", "Resident Evil", "Papers Please"};
	const int GAMES_SIZE = sizeof(games) / sizeof(games[0]);

	// games[1] = "Old School Runescape"; <- Does not work
	strcpy(games[1], "Old School Runescape");

	for (int i = 0; i < GAMES_SIZE; i++)
		printf("%s\n", games[i]);
}

void swap()
{
	char x[15] = "water";
	char y[15] = "lemonade";
	char swap[15];

	printf("Before swap:\n");
	printf("x = %s\n", x);
	printf("y = %s\n", y);

	strcpy(swap, x);
	strcpy(x, y);
	strcpy(y, swap);

	printf("After swap:\n");
	printf("x = %s\n", x);
	printf("y = %s\n", y);
}

void bubbleSort()
{
	int array[12] = {0, 3, 6, 2, 3, 6, 8, 9, 3, 1, 6, 9};
	const int ARRAY_SIZE = sizeof(array) / sizeof(array[0]);

	printf("Pre sort:  ");
	for (int i = 0; i < ARRAY_SIZE; i++)
		printf("%d ", array[i]);

	int iterations = 0;

	int swap;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		bool inOrder = true;
		for (int j = 1; j < ARRAY_SIZE - i; j++)
		{
			iterations += 1;
			if (array[j - 1] > array[j])
			{
				swap = array[j];
				array[j] = array[j - 1];
				array[j - 1] = swap;
				inOrder = false;
			}
		}
		if (inOrder)
			break;
	}

	printf("\nPost sort: ");
	for (int i = 0; i < ARRAY_SIZE; i++)
		printf("%d ", array[i]);

	printf("\nIterations: %d\n", iterations);
}

int structs()
{
}

int main()
{

	structs();
	return 0;
}

void hello(char name[], int age)
{
	printf("Hello, %s!", name);
	printf("\nYou are %d years old\n", age);
}