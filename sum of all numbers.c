#include <stdio.h>

int main()
{
    int i, num, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=2; i<=num; i+=2)
    {
        
        sum += i;
    }
    printf("Sum of all even number between 1 to %d: %d", num, sum);

    return 0;
}
