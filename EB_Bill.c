/* Write a C program 
to print the EB Bill. 

The charges are calculated as given below:
For the First 200 units : Rs 1 per unit
For the next 100 units: Rs 1.5 per unit 
Beyond 300 units: Rs 2 per unit. 

Read the no of units consumed as input, calculate and 
print the total amount that can be charged. */

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
    printf("Program To Calculate EB Bill");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    float units, total_price; // Variable Declaration For Number Of Units Consumed & Total Amount

    // Reading Input For Number Of Units Cinsumed From User
    printf("\n\nEnter Number Of Units Consumed :: ");
    scanf("%f", &units);

    // If Number Of Units Is Less Than 200, Total Amount Is Equal To Number Of Units
    if (units <= 200)
    {
        total_price = units;
    }

    // If Number Of Units Is Greater Than 200 And Less Than 300, Total Amount Is (200 + 1.5*(NumberOfUnits - 200))
    else if (units > 200 && units <= 300)
    {
        total_price = 200 + ((units - 200) * 1.5);
    }

    // If Number Of Units Is Greater Than 300, Total Amount Is (350 + 2*(NumberOfUnits - 300))
    else if (units > 300)
    {
        total_price = 200 + 150 + ((units - 300) * 2);
    }

    // Displaying The Total Amount Of The EB Bill
    printf("\nThe Total Amount Of The EB Bill (In Rupees) Is :: %.2f \n\n", total_price);
}
