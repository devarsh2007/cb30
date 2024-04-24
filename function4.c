//  write a function that calculate simple interest

#include<stdio.h>

void si(int amount , int rate ,int years)
{
      int area;
      area=(amount*rate*years)/100;
      
      printf("total interest : %d",area);

      printf("\ntotal amount : %d",amount+area);
}

void main()
{
      int p;
      int r;
      int t;

      printf("enter amount : ");
      scanf("%d",&p);

      printf("enter rate : ");
      scanf("%d",&r);

      printf("enter time in years : ");
      scanf("%d",&t);

      si(p,r,t);
}