/* Write a C program 
to perform Bubble Sort in an array of integers.*/

#include <stdio.h>

// Function Declaration
int BubbleSort_Asc(int array[], int array_size);

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<40; i++)
    {
        printf("=");
    }
    printf("Program To Sort A User Defined Array Using Bubble Sort In Ascending & Descending Order");
    for (int i=0; i<40; i++)
    {
        printf("=");
    }

    int length; // Variable Declaration For Length Of Array

    // Requesting Input From User For Number Of Elements To Be Added Into The Array
    printf("\n\nEnter Number Of Elements :: ");
    scanf("%d", &length);
    printf("\n");
    int arr[length]; // Declaring An "int" Array With Length Specified By The User

    // Iterating And Appending Values To Array
    for (int i=0; i < length; i++)
    {
        printf("Enter Element For Index #%d :: ", i);
        scanf("%d", &arr[i]);
    }

    // Printing The Array Before Sorting
    printf("\n\nArray Before Bubble Sorting: \n");
    printf("[");
    for (int i=0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b]");

    BubbleSort_Asc(arr, length); // Calling BubbleSort_Asc Function To Sort Array In Ascending Order

    // Printing The Elements After Array Has Been Sorted In Ascending Order
    printf("\n\nSorted Array In Ascending Order Using Bubble Sort: \n");
    printf("[");
    for (int i=0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b]\n\n");  

    BubbleSort_Desc(arr, length); // Calling BubbleSort_Asc Function To Sort Array In Ascending Order
    
    // Printing The Elements After Array Has Been Sorted In Ascending Order
    printf("\nSorted Array In Descending Order Using Bubble Sort: \n");
    printf("[");
    for (int i=0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b]\n\n"); 

    return 0;
}

// Function Definition Of BubbleSort_Asc Function
int BubbleSort_Asc(int array[], int array_size)
{
    int i, j; // Declaring Counter Variables

    // Loop To Access Each Element In The Array
    for (int i = 0; i < array_size - 1; ++i) 
    {
        // Loop To Compare Elements In The Array
        for (int j = 0; j < array_size - i - 1; ++j) 
        {
            // Comparing Adjacent Elements In The Array
            if (array[j] > array[j + 1]) 
            {
                // Swap The Elements If Not In Ascending Order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function Definition Of BubbleSort_Asc Function
int BubbleSort_Desc(int array[], int array_size)
{
    int i, j; // Declaring Counter Variables

    // Loop To Access Each Element In The Array
    for (int i = 0; i < array_size - 1; ++i) 
    {
        // Loop To Compare Elements In The Array
        for (int j = 0; j < array_size - i - 1; ++j) 
        {
            // Comparing Adjacent Elements In The Array
            if (array[j] < array[j + 1]) 
            {
                // Swap The Elements If Not In Descending Order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}