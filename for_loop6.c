// a a a a
// b b b b
// c c c c
// d d d d

#include<stdio.h>
void main()
{
      int number = 97;
      for(int i=1;i<=4;i++)
      {
            printf("%c",number);
      }
      printf("\n");

      for(int i=1;i<=4;i++)
      {
            printf("%c",number+1);
      }
      printf("\n");

      for(int i=1;i<=4;i++)
      {
            printf("%c",number+2);
      }
      printf("\n");

      for(int i=1;i<=4;i++)
      {
            printf("%c",number+3);
      }
      printf("\n");
      
}