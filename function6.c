// calculate bmi
#include<stdio.h>

float bmi_calculater(float height,float weight)
{
      height=height/100;
      return weight/(height*height);
}

void main()
{
      float h;
      float w;
      float bmi;

      printf("enter height : ");
      scanf("%f",&h);

      printf("enter weight : ");
      scanf("%f",&w);

      printf("BMI : %f\n",bmi_calculater(h,w));

      bmi = bmi_calculater(h,w);

      if(bmi<18.5)
      {
            printf("\n--------- report --------");
            printf("\nyou are underweight");
            printf("\n------------------------");
      }

      else if(18.5<=bmi && bmi<=24.9)
      {
            printf("\n--------- report --------");
            printf("\nyou are normal weight");
            printf("\n------------------------");
      }

      else if(bmi>=25 && bmi<=29.9)
      {
            printf("\n--------- report --------");
            printf("\nyou are overweight");
            printf("\n------------------------");
      }
      
}