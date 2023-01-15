#include <stdio.h>
#define PI 3.141

int main(){
  float radius, area;
  printf("Enter Radius: ");

  scanf("%f", &radius);
  area = PI * radius * radius;

  printf("%f\n", area);
  return 0;
}
