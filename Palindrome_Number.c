#include <stdio.h>

int main()
{
    int number, sum = 0, remainder, temp;

    printf("\nEnter Number To Check For Palindromicity :: ");
    scanf("%d", &number);
    temp = number;

    while (number>0)
    {
        remainder = number%10;
        sum = (sum*10) + remainder;
        number = number/10;
    }
    printf("%d", sum);
    if (temp == sum)
    {
        printf("\nThe Given Number is a Palindromic Number.\n\n");
    }

    else
    {
        printf("\nThe Given Number is not a Palindromic Number.\n\n");
    }

    return 0;
}
