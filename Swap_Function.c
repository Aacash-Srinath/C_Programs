#include <stdio.h>

int SwapNumber(int number1, int number2);

int main()
{
    int num1, num2, temp;

    printf("\nEnter First Number :: ");
    scanf("%d", &num1);

    printf("Enter Second Number :: ");
    scanf("%d", &num2);

    SwapNumber(num1, num2);
}

int SwapNumber(int number1, int number2)
{
    int temp;

    printf("\nNumbers Before Swapping Are => First Number = %d; Second Number => %d", number1, number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("\n\nNumbers After Swapping Are => First Number = %d; Second Number => %d\n\n", number1, number2);
}