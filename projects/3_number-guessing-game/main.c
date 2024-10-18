#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int userGuess;
int randNumber;
int attempts;

int MIN = 1;
int MAX = 100;

int getRandomNumber(int min, int max)
{
  return rand() % 100 + 1;
}

int main()
{
  srand(time(0));

  randNumber = getRandomNumber(MIN, MAX);
  attempts = 0;
  printf("I'm thinking of a number between 1 and 100...\n");
  while (true)
  {
    printf("Your guess: ");
    scanf(" %d", &userGuess);
    attempts += 1;
    if (userGuess == randNumber)
    {
      char verb[9];
      strcpy(verb, attempts > 1 ? "attempts" : "attempt");
      printf("That's right! You guessed the number in %d %s!\n", attempts, verb);

      char playAgain;
      printf("Would you like to play again? (y/n): ");
      scanf(" %c", &playAgain);
      playAgain = tolower(playAgain);

      if (playAgain == 'y')
      {
        printf("I'm thinking of a number between 1 and 100...\n");
        randNumber = getRandomNumber(MIN, MAX);
        attempts = 0;
        continue;
      }
      break;
    }
    else if (userGuess > randNumber)
    {
      printf("Too high...\n");
    }
    else
    {
      printf("Too low...\n");
    }
  }

  return 0;
}