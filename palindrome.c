#include<stdio.h>
int main()
{
    int num, i, rev;

    // Reading a number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    rev = num;
    for(i=0; num>0; num=num/10)
    {
        i = i * 10;
        i = i + (num%10);
    }

    //Checking if reverse number is equal to original num or not.
    if(rev == i)
       printf("%d is Palindrome Number.", rev);
    else
       printf("%d is not a Palindrome Number.", rev);
    return 0;
}
