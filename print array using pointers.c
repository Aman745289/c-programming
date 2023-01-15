#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size
 
int main()
{
    int arr[MAX_SIZE];
    int num, i;
    int * ptr = arr;    // Pointer to arr[0]
 
    printf("Enter size of array: ");
    //Inputting size of the array from user
    scanf("%d", &num);
 
    printf("Enter elements in array:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", ptr);
        // Moving pointer to next array element
        ptr++;
    }
    ptr = arr;
 
    printf("Entered array elements are: ");
    for (i = 0; i < num; i++)
    {
        // Print value pointed by the pointer
        printf("%d ", *ptr);
        // Move pointer to next array element
        ptr++;
    }
 
    return 0;
}
