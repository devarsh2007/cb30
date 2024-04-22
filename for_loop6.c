// a a a a
// b b b b
// c c c c
// d d d d

#include <stdio.h>
void main()
{
      int number = 96;

      for (int j = 1; j <= 4; j++)
      {
            for (int i = 1; i <= 4; i++)
            {
                  printf("%c", number+j);
            }
            printf("\n");
      }

      // for(int i=1;i<=4;i++)
      // {
      //       printf("%c",number+1);
      // }
      // printf("\n");

      // for(int i=1;i<=4;i++)
      // {
      //       printf("%c",number+2);
      // }
      // printf("\n");

      // for(int i=1;i<=4;i++)
      // {
      //       printf("%c",number+3);
      // }
      // printf("\n");
}