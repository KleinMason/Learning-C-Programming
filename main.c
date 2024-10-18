#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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

struct Player
{
	char name[12];
	int score;
};

int structs()
{
	/*
	struct = Collection of related members ("variables").
					 They can be of different data types.
					 Listed under one name in a block of memory.
					 Very similar to classes in other languages, but no methods.
	*/

	struct Player player1;
	struct Player player2;

	strcpy(player1.name, "Link");
	player1.score = 4;

	strcpy(player2.name, "Zelda");
	player2.score = 5;

	printf("%s\n", player1.name);
	printf("%d\n", player1.score);

	printf("%s\n", player2.name);
	printf("%d\n", player2.score);

	return 0;
}

typedef struct
{
	char name[25];
	char password[12];
	int id;
} User;

int typeDef()
{
	// typedef = reserved keyword that gives an existing datatype a "nickname"

	User user1 = {"Mason", "password123", 123456789};
	User user2 = {"Klein", "greatPasswd", 987654321};

	printf("%s\n", user1.name);
	printf("%s\n", user1.password);
	printf("%d\n", user1.id);

	printf("%s\n", user2.name);
	printf("%s\n", user2.password);
	printf("%d\n", user2.id);

	return 0;
}

struct Student
{
	char name[12];
	float gpa;
};

void arrayOfStructs()
{
	struct Student student1 = {"Spongebob", 3.0};
	struct Student student2 = {"Patrick", 2.5};
	struct Student student3 = {"Sandy", 3.8};
	struct Student student4 = {"Squidward", 2.9};

	struct Student students[] = {student1, student2, student3, student4};
	const int STUDENTS_SIZE = sizeof(students) / sizeof(students[0]);

	for (int i = 0; i < STUDENTS_SIZE; i++)
	{
		printf("%-14s %.2f\n", students[i].name, students[i].gpa);
	}
}

enum Day
{
	Sunday = 1,
	Monday = 2,
	Tuesday = 3,
	Wednesday = 4,
	Thursday = 5,
	Friday = 6,
	Saturday = 7
};

void enumExample()
{
	enum Day today = Saturday;

	if (today == Sunday || today == Saturday)
	{
		printf("It's the weekend! Party time!\n");
	}
	else
	{
		printf("I have to work today.\n");
	}
}

void pseudoRandomNumbers()
{
	/*
	pseudo random numbers:
			A set of values or elements that are statistically random.
			(Don't use these for any sort of security)
	*/

	// srand = (s): seed, (rand): random
	srand(time(0)); // current time as a seed

	int number1 = rand() % 20 + 1; // random number between 1-6
	int number2 = rand() % 20 + 1;
	int number3 = rand() % 20 + 1;

	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);
}

int main()
{
	pseudoRandomNumbers();
	return 0;
}

void hello(char name[], int age)
{
	printf("Hello, %s!", name);
	printf("\nYou are %d years old\n", age);
}