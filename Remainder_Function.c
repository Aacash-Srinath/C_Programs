/* Write a C program to 
print the remainder without using a modular operator. 
Read a and b, print the remainder while dividing a by b 
without using % modulus operator. [Define a user-defined function] */

#include <stdio.h>

int Remainder(int first_number, int second_number);

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Program To Get Remainder Without Using Modulus Operator");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    int num1, num2; //Variable Declaration for First & Second Number

    // Input For First Number
    printf("\n\nEnter First Number :: ");
    scanf("%d", &num1);

    // Input For Second Number
    printf("\nEnter Second Number :: ");
    scanf("%d", &num2);

    //Checking If Divisor Is Not Zero
    if (num2 != 0)
    {
        printf("\nDivinding %d by %d\n", num1, num2);
        Remainder(num1, num2);
    }

    else
    {
        printf("\nThe Division Of The Given Numbers Is Not Possible\n\n");
    }
}


int Remainder(int first_number, int second_number) // Function Definition For Finding Remainder 
{
    int quotient, remainder; // Variable Declaration For Quotient & Remainder

    quotient = first_number/second_number; // Finding The Quotient After Division

    // Calculating Remainder and Printing Its Value
    if ((quotient*second_number) == first_number)
    {
        printf("\nThe Remainder Is 0");
    }

    else
    {
        remainder = first_number - (quotient*second_number);
        printf("\nThe Remainder Is %d\n\n", remainder);
    }
}