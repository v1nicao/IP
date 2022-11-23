#include <stdio.h>

int main(void)
{

  float num1, num2, num3, num4, bigger, middle, middle2, smaller;

  scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

  bigger = middle = middle2 = smaller = num1;
  if(num2 > bigger){
    bigger = num2;
  }
  if(num3 > bigger){
    bigger = num3;
  }
  if(num4 > bigger){
    bigger = num4;
  }
  if(num2 < smaller){
    smaller = num2;
  }
  if(num3 < smaller){
    smaller = num3;
  }
  if(num4 < smaller){
    smaller = num4;
  }
  if(num2 < bigger && num2 > smaller){
    middle = num2;
  }
  if(num3 < bigger && num3 > smaller){
    middle = num3;
  }
  if(num4 < bigger && num4 > smaller){
    middle = num4;
  }
  if(num2 < middle || num2 > middle){
    middle2 = num2;
  }
  if(num3 < middle || num3 > middle){
    middle2 = num3;
  }
  if(num4 < middle || num4 > middle){
    middle2 = num4;
  }

  printf("%.2f, %.2f, %.2f, %.2f\n", smaller, middle, middle2, bigger);

  return 0;
}