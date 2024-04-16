// 28 - two eight
// 35 - three five

#include<stdio.h>
void main()
{
      int number;
      int first;
      int second;

      printf("enter a number : ");
      scanf("%d",&number);

      first=number/10;
      second = number%10;

      // printf("%d-%d",first,second);
      switch(first)
      {
            case 0:
                  printf("zero");
                  break;

            case 1:
                  printf("one");
                  break;
            
            case 2:
                  printf("two");
                  break;
            case 3:
                  printf("three");
                  break;
            case 4:
                  printf("four");
                  break;
            case 5:
                  printf("five");
                  break;
            case 6:
                  printf("six");
                  break;
            case 7:
                  printf("seven");
                  break;
            case 8:
                  printf("eight");
                  break;
            case 9:
                  printf("nine");
                  break;
            
      }
      printf(" - ");
      switch(second)
      {
            case 0:
                  printf("zero");
                  break;

            case 1:
                  printf("one");
                  break;
            
            case 2:
                  printf("two");
                  break;
            case 3:
                  printf("three");
                  break;
            case 4:
                  printf("four");
                  break;
            case 5:
                  printf("five");
                  break;
            case 6:
                  printf("six");
                  break;
            case 7:
                  printf("seven");
                  break;
            case 8:
                  printf("eight");
                  break;
            case 9:
                  printf("nine");
                  break;

      }
      
}