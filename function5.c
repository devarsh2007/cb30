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
      int num1;
      int num2;

      printf("\n----------- option -----------");
      printf("\nenter 1 for addition");
      printf("\nenter 2 for substraction");
      printf("\nenter 3 for multiplication");
      printf("\nenter 4 for division");
      printf("\n------------------------------");

      printf("\nenter your choise : ");
      scanf("%d",&choise);

      printf("enter number 1 : ");
      scanf("%d",&num1);

      printf("enter number 2 : ");
      scanf("%d",&num2);


      switch(choise)
      {
            case 1:
                  ans = add(num1,num2);
                  printf("%d",ans);
                  break;

            case 2:
                  ans = sub(num1,num2);
                  printf("%d",ans);
                  break;

            case 3:
                  ans = mul(num1,num2);
                  printf("%d",ans);
                  break;
            
            case 4:
                  ans = div(num1,num2);
                  printf("%d",ans);
                  break;

            default:
                  printf("invalid input");
                  break;
      }

}