// write a program that print 1 to 100 number
// 1) while loop

#include <stdio.h>
void main()
{
      int count = 0;
      int number;

      printf("enter a number : ");
      scanf("%d",&number);

      while (count < number)
      {
            count = count + 1;
            printf("\n%d", count);
      }

      // count=count+1;  //1+1
      // printf("%d",count);

      // count=count+1; // 2+1
      // printf("%d",count);

      // count=count+1;
      // printf("%d",count);
}