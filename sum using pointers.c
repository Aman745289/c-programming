#include <stdio.h>
 
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
 
    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2
 
    //Inputting 2 numbers from user
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
 
    sum = *ptr1 + *ptr2;
 
    printf("Sum of 2 numbers: %d", sum);
 
    return 0;
}
