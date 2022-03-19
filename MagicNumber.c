/* Write a C program to 
check whether the given number is a magic number or not. 
A magic number is a number which is equal to product of sum of its digits 
and reverse of this sum. */

#include <stdio.h>

int SumOfDigits(int number); // Function To Find the Sum of Digits of a Given Number
int ReverseNumber(int number); // Function To Find The Reverse of a Given Number

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Program To Check If Given Number Is A Magic Number Or Not");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    // Variable Declaration For Number Input, Sum Of Digits Of Number, Reverse Of Sum Of Digits Of Number
    int num, sum, sum_reverse;

    // Input For Number
    printf("\n\nEnter Number  :: ");
    scanf("%d", &num);

    sum = SumOfDigits(num); // Returning Value of SumOfDigits Function to Variable "sum"
    sum_reverse = ReverseNumber(sum); // Returning Value of ReverseNumber Function to Variable "sum_reverse"

    //Checking If Given Number Is A Magic Number
    if ((sum*sum_reverse) == num)
    {
        printf("\nThe Given Number Is A Magic Number!!\n\n");
    }
    else
    {
        printf("\nThe Given Number Is Not A Magic Number!!\n\n");
    }
}

// Function To Find the Sum of Digits of a Given Number
int SumOfDigits(int number)
{
    int digit, digit_sum=0;

    while (number > 0)    
    {
        digit = number % 10;    
        digit_sum += digit;    
        number /= 10;    
    }       
    return digit_sum; // Returns Value of Sum of Digits of the Number
}

// Function To Find The Reverse of a Given Number
int ReverseNumber(int number)
{
    int reverse_num=0, remainder;

    while (number != 0) 
    {
        remainder = number % 10;
        reverse_num = reverse_num * 10 + remainder;
        number /= 10;
    }

    return reverse_num; // Returns Value of Reverse of the Number
}