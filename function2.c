#include<stdio.h>

void print_symbol(char symbol,int size)
{
      for(int i=1;i<=size;i++)
      {
            printf("%c ",symbol);
      }
}

void main()
{
      char sy;
      int size;

      printf("enter symbol : ");
      scanf("%c",&sy);

      printf("enter a number : ");
      scanf("%d",&size);

      print_symbol(sy,size);

}