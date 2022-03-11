#include <stdio.h>

int main()
{
    int i, num1, num2, hcf, greater;

    printf("Enter First Number :: ");
    scanf("%d", &num1);

    printf("\nEnter Second Number :: ");
    scanf("%d", &num2);

    if (num1>num2)
    {
        greater = num1;
    }
    else
    {
        greater = num2;
    }

    for (i=1; i<greater; i++)
    {
        if (num1%i == 0 && num2%i == 0)
        {
            hcf = i;
        }
    }

    if (hcf == 1)
    {
        printf("\nThe Numbers %d and %d are Relatively Prime Numbers", num1, num2);
    }

    else
    {
        printf("\nThe Numbers %d and %d are not Relatively Prime Numbers", num1, num2);
    }
}
