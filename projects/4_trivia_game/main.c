#include <stdio.h>
#include <ctype.h>

typedef struct
{
  char question[100];
  char options[4][100];
  char answer;
} QuizQuestion;

QuizQuestion quizQuestions[10] = {
    {"What is the name of Sonic the Hedgehog’s sidekick?", {"A) Tails", "B) Knuckles", "C) Shadow", "D) Silver"}, 'A'},
    {"In which game did Mario first appear?", {"A) Super Mario Bros.", "B) Mario Kart", "C) Donkey Kong", "D) Mario Party"}, 'C'},
    {"What type of creature is Kirby?", {"A) Star Warrior", "B) Puffball", "C) Ghost", "D) Robot"}, 'B'},
    {"Which weapon is iconic to the Halo series?", {"A) Master Sword", "B) Buster Sword", "C) Energy Sword", "D) Gunblade"}, 'C'},
    {"In The Elder Scrolls V: Skyrim, what is the name of the dragon who helps the player?", {"A) Paarthurnax", "B) Alduin", "C) Miraak", "D) Odahviing"}, 'A'},
    {"What was the first video game character to have a balloon in the Macy’s Thanksgiving Day Parade?", {"A) Mario", "B) Pikachu", "C) Pac-Man", "D) Sonic"}, 'D'},
    {"In Overwatch, which hero says the line \"Cheers, love! The cavalry's here!\"?", {"A) Tracer", "B) D.Va", "C) Mercy", "D) Reaper"}, 'A'},
    {"Which game series includes the tagline \"Prepare to die\"?", {"A) Bloodborne", "B) Dark Souls", "C) Mortal Kombat", "D) Resident Evil"}, 'B'},
    {"Which classic arcade game involves a yellow character eating dots?", {"A) Pac-Man", "B) Galaga", "C) Dig Dug", "D) Space Invaders"}, 'A'},
    {"What is the best-selling video game of all time (as of 2024)?", {"A) Minecraft", "B) GTA V", "C) Tetris", "D) Wii Sports"}, 'A'}};

const int QUIZ_QUESTIONS_SIZE = sizeof(quizQuestions) / sizeof(quizQuestions[0]);
const int OPTIONS_SIZE = sizeof(quizQuestions[0].options) / sizeof(quizQuestions[0].options[0]);

int main()
{
  int numCorrect = 0;
  char guess;

  for (int i = 0; i < QUIZ_QUESTIONS_SIZE; i++)
  {
    printf("\n%s\n", quizQuestions[i].question);
    for (int j = 0; j < OPTIONS_SIZE; j++)
      printf("\t%s\n", quizQuestions[i].options[j]);

    printf("\nYour guess: ");
    scanf(" %c", &guess);
    guess = toupper(guess);

    if (guess == quizQuestions[i].answer)
    {
      printf("CORRECT!\n");
      numCorrect += 1;
    }
    else
    {
      printf("Incorrect!\n");
    }
  }
  printf("\n===================================\n");
  printf("\nFINAL SCORE: %d/%d\n", numCorrect, QUIZ_QUESTIONS_SIZE);
  printf("\n===================================\n");
  return 0;
}
