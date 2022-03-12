#include <stdio.h>

int Arithmetic(int a, int b);
int Factorial(int difference);

int main()
{
    system("cls");
    int num1, num2, diff, factoria;

    printf("\nEnter First Number :: ");
    scanf("%d", &num1);

    printf("Enter Second Number :: ");
    scanf("%d", &num2);

    diff = num1 - num2;
    
    if (num1 > 0 && num2 > 0) 
    {
        Arithmetic(num1, num2);
        Factorial(diff);
    }
}

int Arithmetic(int a, int b)
{
    int *p, *q, sum, diff, mult;
    float division;

    p = &a;
    q = &b;

    sum = *p + *q;
    diff = *p - *q;
    mult = *p * *q;
    division = (float)*p/(*q);

    printf("\nSum of Given Numbers :: %d", sum);
    printf("\nDifference of Given Numbers :: %d", diff);
    printf("\nProduct of Given Numbers :: %d", mult);
    printf("\nDivision of Given Numbers :: %f", division);

}

int Factorial(int difference)
{
    int i, fact = 1;
    for (i = 2; i <= difference; i++)
    {
        fact *= i;
    }

    printf("\nFactorial of Difference of Given Numbers :: %d\n\n", fact);

}