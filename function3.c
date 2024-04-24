// write a function that calculate area of circle

#include<stdio.h>

float pi()
{
      return 3.14159;
}

void main()
{
      float a;
      float area;
      int r;

      printf("enter radius : ");
      scanf("%d",&r);

      a=pi();
      // printf("%f",a);

      area=a*r*r;
      printf("%f",area);

}