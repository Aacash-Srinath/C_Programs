/* Write a C Program to 
check whether the given pair of numbers is amicable numbers are not. 
Two numbers are amicable if 
the sum of the proper divisors of one number is equal to the other number. */

#include <stdio.h>

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Program To Check Pair Of Amicable Numbers");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    // Variable Declaration For First Number, Second Number, Sum of Factors of First Number, Sum of Factors of Second Number
    int i, num1, num2, num1_factorsum=0, num2_factorsum=0; 

    // Input For First Number
    printf("\n\nEnter First Number :: ");
    scanf("%d", &num1);

    // Input For Second Number
    printf("\nEnter Second Number :: ");
    scanf("%d", &num2);

    // Sum of Factors for First Number
    for (i=1; i<num1; i++)
    {
        if (num1 % i == 0)
        {
            num1_factorsum = num1_factorsum + i;
        }
    }
    
    // Sum of Factors for Second Number
    for (i=1; i<num2; i++)
    {
        if (num2 % i == 0)
        {
            num2_factorsum = num2_factorsum + i;
        }
    }

    // Checking if the Given Numbers are Amicable or not
    if (num1 == num2_factorsum && num2 == num1_factorsum)
    {
        printf("\nThe Numbers %d and %d are Amicable Numbers\n\n", num1, num2);
    }
    else
    {
        printf("\nThe Numbers %d and %d are not Amicable Numbers\n\n", num1, num2);
    }
}