#include <stdio.h>

int main(void) {

  float n1, n2, n3, n4, big, mid, mid2, smal;

  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  big = mid = smal = n1;
  if(n2 > big){
    big = n2;
  }
  if(n3 > big){
    big = n3;
  }
  if(n4 > big){
    big = n4;
  }
  if(n2 < smal){
    smal = n2;
  }
  if(n3 < smal){
    smal = n3;
  }
  if(n4 < smal){
    smal = n4;
  }
  if(n2 < n3 && n2 > n4){
    if(n2 < big && n2 > smal){
        mid = n2;
    } else mid2 = n2;
  }
  if(n3 < n2 )
  if(n3 < big && n3 > smal){
    mid = n3;
  }
  if(n4 < big && n4 > smal){
    mid = n4;
  }
  

  printf("%.2f, %.2f, %.2f, %.2f\n", smal, mid, mid2, big);

  return 0;
}