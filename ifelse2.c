// write a program that check number is even or odd
#include<stdio.h>
void main()
{
      int number;

      printf("enter a number : ");
      scanf("%d",&number);

      // printf("%d",number/2);
      // printf("\n%d",number%2);
      if(number%2==0)
      {
            printf("number is even");
      }
      else
      {
            printf("number is odd");
      }
}