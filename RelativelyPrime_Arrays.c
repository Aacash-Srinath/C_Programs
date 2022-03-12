#include <stdio.h>

int main()
{
    int i, j=0, k=0, l, num1, num2, num1_factors[100], num2_factors[100], hcf=0;
    printf("Enter First Number :: ");
    scanf("%d", &num1);

    printf("\nEnter Second Number :: ");
    scanf("%d", &num2);

    for(i=1;i<=num1;i++)
    {
        if(num1%i==0)
        {
            num1_factors[j++]=i;
        }
    }

    printf("[");
    for(i=0; i<j; i++) 
    {
        printf("%d, ", num1_factors[i]);
    }
    printf("\b\b]\n");
    printf("\n");


    for(i=1;i<=num2;i++)
    {
        if(num2%i==0)
        {
            num2_factors[k++]=i;
        }
    }

    printf("[");
    for(i=0; i<k; i++) 
    {
        printf("%d, ", num2_factors[i]);
    }
    printf("\b\b]\n");
    printf("\n");


    for (i=0; i<j; i++)
    {
        for (l=0; l<k; l++)
        {
            if (num1_factors[i] == num2_factors[l])
            {
                hcf += 1;
            }
        }
    }

    if (hcf == 1)
    {
        printf("The Numbers %d and %d are Relatively Prime Numbers\n", num1, num2);
    }

    else
    {
        printf("The Numbers %d and %d are not Relatively Prime Numbers\n", num1, num2);
    }
}