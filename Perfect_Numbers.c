#include <stdio.h>

void PerfectRange(lower, upper)
{
    int i, j; //Declaring Counter Variables
    int sum_divisor; //Declaring Sum of Divisors Variables

    printf("Perfect Numbers Present Within the Range of %d to %d are ::  ", lower, upper);

    for(i=lower; i<=upper; i++)
    {
        sum_divisor = 0; //Initialize Sum of Divisors as 0

        /* Check Whether the Number i is a Perfect Number or Not */
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum_divisor += j;
            }
        }
 
        /* Check if the Number i is a Perfect Number */
        if(sum_divisor == i)
        {
            printf("%d\t", i);
        }
    }
}

void main()
{
    system("cls"); // Clear Screen from Previous Executions

    int lower, upper; //Declaring Lower Limit, Upper Limit Variables

    printf("\nEnter Value for Lower Limit :: ");
    scanf("%d", &lower); //Input For Lower Limit
    printf("\nEnter Value for Upper Limit :: ");
    scanf("%d", &upper); //Input For Upper Limit

    PerfectRange(lower, upper);
}