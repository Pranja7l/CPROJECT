#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int ch, noguess = 0;
  srand(time(0));

  int randno = (rand() % 100 + 1);

  printf("Welcome to the Number Guessing Game!\n");
  printf("I have selected a number between 1 and 100. Try to guess it!\n");

  do
  {
    printf("Guess the Number: ");
    while (scanf("%d", &ch) != 1)
    {
      printf("Invalid input. Please enter an integer: ");
      while (getchar() != '\n')
        ; // clear the buffer
    }

    if (ch > randno)
    {
      printf("Lower Number Please! \n");
    }
    else if (ch < randno)
    {
      printf("Greater Number Please! \n");
    }

    noguess++;
  } while (ch != randno); // Fix: Continue until guessed number matches random number

  if (noguess == 1)
  {
    printf("Amazing! You guessed the number %d on your first try!\n", randno);
  }
  else
  {
    printf("Well done! You guessed the number %d in %d guesses.\n", randno, noguess);
  }

  return 0;
}
