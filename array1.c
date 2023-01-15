#include <stdio.h>
#define MAX_SIZE 1000 //Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; //Declares sizr of array
    int i, num;
    printf("Enter size of array: ");
    scanf("%d", &num);

    printf("Enter %d elements in the array : ", num);

    //Reads size & elements in array
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Prints all elements of array
    printf("\nElements in array are: ");
    for(i=0; i<num; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
