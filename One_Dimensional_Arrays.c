#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

int InsertElement(int oned_array[], int array_size);

int main()
{
    clrscr();
    int i, array_size;
    int new_ele, num;
    int oned_array[100];

    printf("\nEnter First 5 Elements \n\n");

    for(i=0; i<5; i++) {
        printf("Enter Value For oned_array[%d] :: ", i);
        scanf("%d", &oned_array[i]);}

    //Displaying array elements
    printf("\nSingle Dimensional array elements ::\n[");
    for(i=0; i<5; i++) {
        printf("%d, ", oned_array[i]);}
    printf("\b\b]\n");

    //New Elements Insertion
    printf("\nEnter Number of Elements to be Inserted :: ");
    scanf("%d", &num);
    for (i=5; i<5+num; i++) {
        printf("Enter Value For oned_array[%d] :: ", i);
        scanf("%d", &new_ele);
        oned_array[i] = new_ele;}

    printf("\nNew Single Dimensional Array \n[");
    for(i=0; i<(5+num); i++) {
        printf("%d, ", oned_array[i]);}
    printf("\b\b]\n");
    printf("\n");
    return 0;
}

