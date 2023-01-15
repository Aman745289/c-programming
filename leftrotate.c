#include <stdio.h>
#define size 5 // defining Size of the array

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, num;
    int arr[size];

    printf("Enter 5 elements array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to left rotate: ");
    scanf("%d", &num);

    // Actual rotation
    num = num % size;

    // Printing array before rotation
    printf("Array before rotationn");
    printArray(arr);

    // Rotating array n times
    for(i=1; i<=num; i++)
    {
        rotateByOne(arr);
    }

    // Printing array after rotation
    printf("\n\nArray after rotation\n");
    printArray(arr);

    return 0;
}

void rotateByOne(int arr[])
{
    int i, first;

    // Storing first element of array
    first = arr[0];

    for(i=0; i<size-1; i++)
    {
        // Moving each array element to its left
        arr[i] = arr[i + 1];
    }

    // Copying the first element of array to last
    arr[size-1] = first;
}


//Printing the given array

void printArray(int arr[])
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
