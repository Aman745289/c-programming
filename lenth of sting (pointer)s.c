#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string
 
int main()
{
    char text[MAX_SIZE];
    char * str = text;
    int count = 0;
 
    // Inputtin string from user
    printf("Enter any string: ");
    gets(text);
 
    // Iterating though last element of the string
    while(*(str++) != '\0') count++;
 
    printf("Length of %s is: %d", text, count);
 
    return 0;
}
