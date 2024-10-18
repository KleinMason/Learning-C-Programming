#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
  char unit;
  float inputTemp;
  float convertedTemp;

  printf("\n===Temperature Converter ===\n");
  printf("Input \"Q\" to exit the program\n");

  while (true)
  {
    printf("\nIs the temperature in (C) or (F)?: ");
    scanf(" %c", &unit);
    unit = toupper(unit);

    if (unit == 'C')
    {
      printf("Enter the temp in Celsius: ");
      scanf("%f", &inputTemp);

      convertedTemp = inputTemp * (9.0 / 5.0) + 32;
      printf("%.1fºC is %.1fºF\n", inputTemp, convertedTemp);
    }
    else if (unit == 'F')
    {
      printf("Enter the temp in Fahrenheit: ");
      scanf("%f", &inputTemp);

      convertedTemp = (inputTemp - 32) * (5.0 / 9.0);
      printf("%.1fºF is %.1fºC\n", inputTemp, convertedTemp);
    }
    else if (unit == 'Q')
      break;
    else
      printf("\nInvalid input.\n");
  }

  return 0;
}