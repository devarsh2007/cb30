// write a program that calculate add , sub , mul ,div
#include<stdio.h>
void main()
{
      int a ;
      int b ;
      int choise;

      printf("enter number 1 : ");
      scanf("%d",&a);

      printf("enter number 2 : ");
      scanf("%d",&b);

      printf("\n---------- option ---------");
      printf("\nenter 1 for addition");
      printf("\nenter 2 for substraction");
      printf("\nenter 3 for multiplication");
      printf("\nenter 4 for division");
      printf("\n--------------------------");

      printf("\nenter your choise : ");
      scanf("%d",&choise);

      switch(choise)
      {
            case 1:
                 printf("addition : %d",a+b);
                 break;

            case 2:
                  printf("substraction : %d",a-b);
                  break;

            case 3:
                  printf("multiplication : %d",a*b);
                  break;

            case 4:
                  printf("division : %d",a/b);
                  break;

            default:
                  printf("invalid input");
                  break;
      }
      
}