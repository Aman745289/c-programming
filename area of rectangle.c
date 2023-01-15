#include<stdio.h>
#include<conio.h>

int main() {
   int length, breadth, area;

   printf("\nEnter length of rectangle : ");
   scanf("%d", &length);

   printf("\nEnter breadth of rectangle : ");
   scanf("%d", &breadth);

   // Formula to calculate area of Rectangle
   area = length * breadth;
   printf("\nArea of rectangle : %d", area);

   return (0);
}
