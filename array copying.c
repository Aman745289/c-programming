#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of the array

int main()
{
    int first[MAX_SIZE], second[MAX_SIZE];
    int i, num;

    //Enter size of array
    printf("Enter the size of the array : ");
    scanf("%d", &num);

    //Reading elements of array
    printf("Enter elements of first array : ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &first[i]);
    }


   //Copy all elements from first array to second array
   for(i=0; i<num; i++)
    {
        second[i] = first[i];
    }

    //Printing all elements of first array entered by user
    printf("\nElements of first array are: \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t", first[i]);
    }


    //Printing all elements of second array
    printf("\nElements of second array are: \n ");
                                for(i=0; i<num; i++)
    {
        printf("%d\t", second[i]);
    }

  return 0;
}#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of the array

int main()
{
    int first[MAX_SIZE], second[MAX_SIZE];
    int i, num;

    //Enter size of array
    printf("Enter the size of the array : ");
    scanf("%d", &num);

    //Reading elements of array
    printf("Enter elements of first array : ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &first[i]);
    }


   //Copy all elements from first array to second array
   for(i=0; i<num; i++)
    {
        second[i] = first[i];
    }

    //Printing all elements of first array entered by user
    printf("\nElements of first array are: \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t", first[i]);
    }


    //Printing all elements of second array
    printf("\nElements of second array are: \n ");
                                for(i=0; i<num; i++)
    {
        printf("%d\t", second[i]);
    }

  return 0;
}
