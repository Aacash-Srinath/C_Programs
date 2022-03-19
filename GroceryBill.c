/* Write a C program 
to calculate the grocery bill. 
Read the price and quantity of ‘n’ items as an input. 

1) Define a function to calculate the total amount 
(by calculating price*quantity for each item and sum it up). 

2) Define another  function to calculate 
the discount according to the following rules:
For total less than Rs.1000, discount is 5%. 
For total greater than Rs.1000 but less than Rs.5000, discount is 10%. 
For total greater than Rs.5000, discount is 15%. 

3) Define another function 
to print the individual item prices, total, discount and the final price */

#include <stdio.h>

// Structure Definition For "bill"
struct bill
{
    float price;
    int quantity;
} bill_items[50];;

//Function Declarations
float TotalCost(struct bill bill_items[50], int number_of_items);
float Discount(float original_price);
void BillDetails(struct bill bill_items[50], int number_of_items, float total, float discount);

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Program To Calculate Bill Amount & Display Bill Details");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    int item_num, i; // Variable Declaration For Number Of Items & "for" Loop Counter
    float orig_price, discount_amount; // Variable Declaration For Original Price & Discount Amount

    // Input For Number Of Items
    printf("\n\nEnter Number of Items You Want to Bill :: ");
    scanf("%d", &item_num);

    // Iterating The "for" Looop For Given Number Of Items
    for (i=0; i<item_num; i++)
    {
        // Appending Value Of Price Of Item To "price" Variable In Structure bill_item At Index "i"
        printf("\nEnter Price In Rupees For Product #%d :: ", (i+1));
        scanf("%f", &bill_items[i].price); 

        // Appending Value Of Quantity Of Item To "quantity" Variable In Structure bill_item At Index "i"
        printf("Enter Quantity For Product #%d :: ", (i+1));
        scanf("%d", &bill_items[i].quantity);
    }

    // Calculating Original Price By Calling Function "TotalCost"
    orig_price = TotalCost(bill_items, item_num); 

    // Calculating Discount Amount By Calling Function "Discount"
    discount_amount = Discount(orig_price); 

    // Calling Function BillDetails
    BillDetails(bill_items, item_num, orig_price, discount_amount); 

    return 0;
}

// Function Definition Of "TotalCost" For Calculating Total Cost Of Items Without Discount Given By User
float TotalCost(struct bill bill_items[50], int number_of_items)
{
    float sum=0;

    for (int i=0; i<number_of_items; i++)
    {
        sum += (bill_items[i].price * bill_items[i].quantity);
    }

    return sum; // Returns Value Of "sum"
}

// Function Definition Of "Discount" For Calculating Discount Amount As Per Total Cost
float Discount(float original_price)
{
    // If Total Price is less than 1000, then discount percent is 5%
    if (original_price <= 1000)
    {
        return original_price*0.05; // Returns Value Of Discount Amount As Per The Condition Set
    }

    // If Total Price is greater than 1000 and less than 5000, then discount percent is 10%
    else if (original_price > 1000 && original_price <= 5000)
    {
        return original_price*0.10; // Returns Value Of Discount Amount As Per The Condition Set
    }

    // If Total Price is greater than 5000, then discount percent is 15%
    else
    {
        return original_price*0.15; // Returns Value Of Discount Amount As Per The Condition Set
    }
    
}

/* Function Definition Of "BillDetails" For Displaying 
Individual Item Prices, Total Price Before Discount, Discount Amount and the Discounted Price */
void BillDetails(struct bill bill_items[50], int number_of_items, float total, float discount)
{
    float discounted_total; // Variable Declaration For Discounted Price

    //Displaying Individual Item Prices
    for (int i=0; i<number_of_items; i++)
    {
        printf("\nTotal Price Of Product #%d In Rupees :: %.2f", \
        i+1, (bill_items[i].price * bill_items[i].quantity));
    }

    //Displaying Total Price Before Discount
    printf("\nTotal Price Of Items Before Discount :: %.2f", total);

    //Displaying Discount Amount
    printf("\nDiscount Amount :: %.2f", discount);
    
    //Calculating & Displaying Discounted Price
    discounted_total = total - discount;
    printf("\nPrice After Applying Discount :: %.2f\n\n", discounted_total);
}