// write a program that print pyramid from given input
// # , number
// *
// * *
// * * *
// * * * *

#include <stdio.h>
void main()
{
      for (int j = 1; j <= 4; j++)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("* ");
            }
            printf("\n");
      }

      // for(int i=1;i<=2;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1; i<=3 ; i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1; i<=4 ; i++)
      // {
      //       printf("*");
      // }
      // printf("\n");
}