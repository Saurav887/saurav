#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess;
    srand(time(NULL));
    num = rand() %10;
    printf(" welcome, guess the number between (0-10) and win the game\n ");
    while(1)
   {
      printf("guess the number\n");
      scanf("%d", &guess);
      guess++;
     if(guess > num)
     {
     printf("low number daalo bhai\n");
     }
     else if (guess == num)
     {
         printf("congratulation you won party de\n");
         break;
     
     }
     else if (guess<num)
     {
      printf("high no dalo be\n");
     }
     else
     printf("congratulation you won, party de\n");
     
    }while (guess!= num)

  return 0;
}