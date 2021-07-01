/*
Guessing Game
Author: Tawhid Monowar
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   time_t t;
   srand((unsigned)time(&t));
   int RandomNumber,InputNumber,i;

   RandomNumber = rand()%21;
   printf("This is a Guessing Game!\nI have chosen a number between 0 and 20 which you must guess.\n\n");

   for (i=5;i>0;i--)
   {
      printf("You have %d tr%s left.\nEnter a guess:",i, i == 1 ? "y" : "ies" );
      scanf("%d",&InputNumber);
      if(InputNumber == RandomNumber)
      {
         printf("Congratulations. You guessed it!");
         i=0;
      }else if(InputNumber>RandomNumber)
      {
         printf("Sorry %d is wrong. My number is less then that.\n\n",InputNumber);

      }else if(InputNumber<RandomNumber)
      {
         printf("Sorry %d is wrong. My number is greater then that.\n\n",InputNumber);

      }
   }

   return 0;
}
