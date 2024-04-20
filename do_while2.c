// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15

#include <stdio.h>
void main()
{
      int number1;
      int number2;
      int count = 0;

      printf("enter start point : ");
      scanf("%d", &number1);

      printf("enter end point : ");
      scanf("%d", &number2);

      for (number1=number1; number1 <= number2; number1++)
      {
            count=0;
            printf("-----------------------------------\n");
            do
            {
                  count += 1;
                  printf("%d x %d = %d\n", number1, count, number1 * count);
            } while (count < 10);


            // number1+=1;
      }

      // count+=1;
      // printf("%d x %d = %d",number,count,number*count);

      // count+=1;
      // printf("%d x %d = %d",number,count,number*count);
}