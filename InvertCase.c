/* Write a C program 
to toggle the case of each character in the given string */ 

#include <stdio.h> 
#include <string.h>
#include <ctype.h>
int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Program To Invert Cases In A Word String");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    int i, string_length; // Variable Declaration For Counter Variable & Length Of String
    char str[100]; // Variable Declaration For String

    // Reading String Input From User
    printf("\n\nEnter A Word Containing A Mix Of Lower & Uppercases :: ");
    scanf("%s", str);
    string_length = strlen(str); // Length Of String Given By User
    printf("\nString After Inverting Case :: ");
    // Inverting The Case & Displaying
    for (i=0; i < string_length; i++)
    {
        if (isupper(str[i])) 
        {
            printf("%c", tolower(str[i]));
        }
        else if (islower(str[i])) 
        {
            printf("%c", toupper(str[i]));
        }
    }
    printf("\n\n");
    return 0;
}