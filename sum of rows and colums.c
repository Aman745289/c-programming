#include <stdio.h>
 
#define size 3 // Defining Matrix size
 
int main()
{
    int Arr[size][size];
    int row, col, sum = 0;
 
    //Inputing elements in matrix from user
    printf("Enter elements in matrix of size %dx%d: \n", size, size);
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            scanf("%d", &Arr[row][col]);
        }
    }
 
    // Calculating sum of elements of each row of matrix
    for(row=0; row<size; row++)
    {
        sum = 0;
        for(col=0; col<size; col++)
        {
            sum += Arr[row][col];
        }
        //Printing Sum of row elements
        printf("Sum of elements of row %d = %d\n", row+1, sum);
    }
 
    // Finding sum of elements of each columns of matrix
    for(row=0; row<size; row++)
    {
        sum = 0;
        for(col=0; col<size; col++)
        {
            sum += Arr[col][row];
        }
        //Printing Sum of columns elements
        printf("Sum of elements of column %d = %d\n", row+1, sum);
    }
 
    return 0;
}
