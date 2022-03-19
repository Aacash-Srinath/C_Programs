/* Write a C program to 
print the binary representation of given integer n. */

#include <stdio.h>

int BinaryConvert(int number);

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Converting Decimal Number To Binary Form");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    // Variable Declaration To Get Input From User
    int num;

    // Read Input for Number to be Converted
    printf("\n\nEnter Number :: ");
    scanf("%d", &num);

    printf("\nThe Number After Converting To Binary Is :: ");
    BinaryConvert(num); // Function Call for Conversion of Number from Decimal to Binary
    printf("\n\n");
    return 0;
}

// Function Definition for Conversion of Decimal to Binary
int BinaryConvert(int number)
{
    if (number > 1)
    {
        BinaryConvert(number/2);
    }

    printf("%d", number%2);
}