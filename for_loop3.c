// *
// * *
// * * *
// * * * *

// nested loop

#include <stdio.h>
void main()
{
      // int count=1;
      int number;

      printf("enter number : ");
      scanf("%d",&number);

      for (int j = 1; j <= number; j++)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("*");
            }
            printf("\n");
            // count+=1;
      }

      // for(int i=1; i<=2 ; i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1; i<=3 ; i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=4;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");
}