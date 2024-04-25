// write function that  calulate basic opration

#include<stdio.h>

int add(int a,int b)
{
      // a,b local variable
      return a+b ;
}

int sub(int a,int b)
{
      return a-b ;
}

int mul(int a,int b)
{
      return a*b ;
}

int div(int a,int b)
{
      return a/b ;
}

void main()
{
      int choise; //global variable
      int ans;

      printf("\n----------- option -----------");
      printf("\nenter 1 for addition");
      printf("\nenter 2 for substraction");
      printf("\nenter 3 for multiplication");
      printf("\nenter 4 for division");
      printf("\n------------------------------");

      printf("\nenter your choise : ");
      scanf("%d",&choise);


}