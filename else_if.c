// write a program that check number is positive , negetive or 0
// else if - multiple condition

#include<stdio.h>
void main()
{
      int num ; 
      printf("enter a number : ");
      scanf("%d",&num);

      if(num<0)
      {
            printf("negetive number");
      }
      else if(num==0)
      {
            printf("number is 0");
      }
      else
      {
            printf("positive number");
      }
}