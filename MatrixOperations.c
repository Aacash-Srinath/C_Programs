/* Write a C Program 
to do matrix manipulations. Read two matrices as input. 

Define functions to calculate and print the followin:
a)	Sum of matrices
b)	Difference of matrices
c)	Product of matrices */

#include <stdio.h>

int Matrices_Sum(int row1, int column1, int arr1[row1][column1], int arr2[row1][column1]);
int Matrices_Diff(int row2, int column2, int arr3[row2][column2], int arr4[row2][column2]);
int Matrices_Product(int row3, int column3, int arr5[row3][column3], int arr6[row3][column3]);

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Program To Do Matrix Operations");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    int row, column, i, j; // Variable Declaration For Number Of Rows & Number Of Columns & Counter Variables

    // Reading Inputs From User
    printf("\n\nEnter Number Of Rows For Matrix :: ");
    scanf("%d", &row);
    printf("Enter Number Of Columns For Matrix :: ");
    scanf("%d", &column);

    int array[row][column], array1[row][column];

    // Input Numbers For Matrix 1
    printf("\nMatrix 1:\n");
    for (i=0; i < row; i++)
    {
        for (j=0; j < column; j++)
        {
            printf("Enter Value For Array[%d][%d] :: ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }

    // Input Numbers For Matrix 2
    printf("\nMatrix 2:\n");
    for (i=0; i < row; i++)
    {
        for (j=0; j < column; j++)
        {
            printf("Enter Value For Array[%d][%d] :: ", i+1, j+1);
            scanf("%d", &array1[i][j]);
        }
    }

    // Display The Matrices Given By The User
    printf("\n==========User Given Matrix==========\n\n");
    for (i=0; i < row; i++)
    {
        for (j=0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\nAnd\n\n");
    for (i=0; i < row; i++)
    {
        for (j=0; j < column; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    Matrices_Sum(row, column, array, array1); // Function Call For Addition Of Matrices
    Matrices_Diff(row, column, array, array1); // Function Call For Subtraction Of Matrices
    Matrices_Product(row, column, array, array1); // Function Call For Multiplication Of Matrices
    return 0;
}


int Matrices_Sum(int row1, int column1, int arr1[row1][column1], int arr2[row1][column1])
{
    int array_sum[row1][column1];

    // Adding The Matrices
    for (int i=0; i < row1; i++)
    {
        for (int j=0; j < column1; j++)
        {
            array_sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\n==========Matrix After Addition (Matrix1 + Matrix2)==========\n\n");
    for (int i=0; i < row1; i++)
    {
        for (int j=0; j < column1; j++)
        {
            printf("%d ", array_sum[i][j]);
        }
        printf("\n");
    }
}


int Matrices_Diff(int row2, int column2, int arr3[row2][column2], int arr4[row2][column2])
{
    int array_sum[row2][column2];

    // Adding The Matrices
    for (int i=0; i < row2; i++)
    {
        for (int j=0; j < column2; j++)
        {
            array_sum[i][j] = arr3[i][j] - arr4[i][j];
        }
    }

    printf("\n==========Matrix After Subtraction (Matrix1 - Matrix2)==========\n\n");
    for (int i=0; i < row2; i++)
    {
        for (int j=0; j < column2; j++)
        {
            printf("%d ", array_sum[i][j]);
        }
        printf("\n");
    }
}


int Matrices_Product(int row3, int column3, int arr5[row3][column3], int arr6[row3][column3])
{
    int array_sum[row3][column3];

    // Adding The Matrices
    for (int i=0; i < row3; i++)
    {
        for (int j=0; j < column3; j++)
        {
            array_sum[i][j] = arr5[i][j] * arr6[i][j];
        }
    }

    printf("\n==========Matrix After Multiplication (Matrix1 * Matrix2)==========\n\n");
    for (int i=0; i < row3; i++)
    {
        for (int j=0; j < column3; j++)
        {
            printf("%d ", array_sum[i][j]);
        }
        printf("\n");
    }
}

