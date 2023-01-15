#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=num; i>=1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
