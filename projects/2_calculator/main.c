#include <stdio.h>

int main()
{
  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter an operator (+ - * /): ");
  scanf(" %c", &operator);

  printf("\nNumber 1: ");
  scanf(" %lf", &num1);

  printf("\nNumber 2: ");
  scanf(" %lf", &num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("\n%lf %c %lf = %lf\n", num1, operator, num2, result);
    break;
  case '-':
    result = num1 - num2;
    printf("\n%lf %c %lf = %lf\n", num1, operator, num2, result);
    break;
  case '*':
    result = num1 * num2;
    printf("\n%lf %c %lf = %lf\n", num1, operator, num2, result);
    break;
  case '/':
    result = num1 / num2;
    printf("\n%lf %c %lf = %lf\n", num1, operator, num2, result);
    break;
  default:
    printf("%c is not a valid operator.", operator);
    break;
  }

  return 0;
}