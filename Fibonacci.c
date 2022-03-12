#include <stdio.h>

int main()
{
    //Initialize variables for the loop, range of the series & Fibonacci numbers
    int i, first, second, temp, lower, upper;

    //Input for Lower Limit of Raange
    printf("Enter Lower Limit of Range :: ");
    scanf("%d", &lower);

    //Input for Upper Limit of Range
    printf("Enter Upper Limit of Range :: ");
    scanf("%d", &upper);

    //Printing the Fibonacci Series in the Given Range
    first = 0;
    second = 1;
    printf("%d\t", first);
    printf("%d\t", second);

    for (i=lower; i<upper; i++)
    {
        temp = first + second;
        first = second;
        second = temp;

        if (temp <= upper)
        {
            printf("%d\t", temp);
        }
        else
        {
            break;
        }
    }

    return 0;
}