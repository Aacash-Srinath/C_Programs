#include <stdio.h>

int main() 
{
    int num, num1, remainder, armstrong = 0; // Declaring Variables for Number, Remainder, & Armstrong
    
    printf("Enter A Three-Digit Integer: "); //Input Prompt for Number to Check Armstrong Or Not
    scanf("%d", &num); // Input number
    
    num1 = num;

    while (num1 != 0) {
       remainder = num1 % 10; // Remainder Contains The Last Digit
        
       armstrong += remainder * remainder * remainder;
    
       num1 /= 10; // Removing Last Digit from the Orignal Number
    }

    //Checking If Input Number is Armstrong or Not
    if (armstrong == num)
    {
        printf("%d Is An Armstrong Number.", num);
    }

    else
    {
        printf("%d Is Not An Armstrong Number.", num);
    }

    return 0;
}
