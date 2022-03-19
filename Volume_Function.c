/* Write a C program 
to calculate the volume of the following shapes: 
Cube, Cuboid, Sphere, Cylinder and Cone. 

Ask the user which one she/he wants to calculate, 
and take the appropriate required inputs. Then print the result. 

The input should be taken in the main function and 
calculations for every solid should be done in a separate function 
by passing appropriate arguments. */

#include <stdio.h>
#include <ctype.h>

// Function Declarations
int Cube_Volume(float side);
int Cuboid_Volume(float cuboid_length, float cuboid_breadth, float cuboid_height);
int Sphere_Volume(float sph_radius);
int Cylinder_Volume(float cyl_radius, float cyl_height);
int Cone_Volume(float cone_radius, float cone_height);

int main()
{
    system("cls");

    // Program Title
    printf("\n");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }
    printf("Program To Calculate Volume Of Various Solids Via A Menu");
    for (int i=0; i<50; i++)
    {
        printf("=");
    }

    int i, option; // Variable Declaration For Counter Variable & Option Selection
    char return_to_menu = 'y'; // Variable Declaration For Option To Return Back To The Menu
    float length, breadth, height, radius;

    while (tolower(return_to_menu) == 'y')
    {
        printf("\n\n\n");
        for (int i=0; i<50; i++)
        {
            printf("=");
        }
        printf("VOLUME CALCULATOR");
        for (int i=0; i<50; i++)
        {
            printf("=");
        }

        // Menu Containing Options For Calculating Volumes Of Different Solids
        printf("\n\nSelect Any One Of The Options To Calculate Volume Of A Solid:");
        printf("\n1. Volume Of Cube \n2. Volume Of Cuboid \n3. Volume Of Sphere \n4. Volume Of Cylinder \n5. Volume of Cone \n6. Exit Program");

        // Input For Option Number
        printf("\n\nEnter Your Choice :: ");
        scanf("%d", &option);

        // If User Selects Option 1
        if (option == 1)
        {
            printf("\n");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }
            printf("You Have Selected 'Volume Of Cube'");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }

            // Input For Value Of Side Of Cube
            printf("\n\nEnter Value For Side Of Cube :: ");
            scanf("%f", &length);

            Cube_Volume(length);

            printf("\n\nDo You Want To Return Back To The Menu? (Y/N) :: ");
            scanf("%s", &return_to_menu);
        }

        // If User Selects Option 2
        else if (option == 2)
        {
            printf("\n");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }
            printf("You Have Selected 'Volume Of Cuboid'");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }

            // Input For Value Of Length, Breadth & Height Of Cuboid
            printf("\n\nEnter Value For Length Of Cuboid :: ");
            scanf("%f", &length);
            printf("\nEnter Value For Breadth Of Cuboid :: ");
            scanf("%f", &breadth);
            printf("\nEnter Value For Height Of Cuboid :: ");
            scanf("%f", &height);

            Cuboid_Volume(length, breadth, height);

            printf("\n\nDo You Want To Return Back To The Menu? (Y/N) :: ");
            scanf("%s", &return_to_menu);
        }

        // If User Selects Option 3
        else if (option == 3)
        {
            printf("\n");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }
            printf("You Have Selected 'Volume Of Sphere'");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }

            // Input For Value Of Radius Of Sphere
            printf("\n\nEnter Value For Radius Of Sphere :: ");
            scanf("%f", &radius);

            Sphere_Volume(radius);

            printf("\n\nDo You Want To Return Back To The Menu? (Y/N) :: ");
            scanf("%s", &return_to_menu);
        }

        // If User Selects Option 4
        else if (option == 4)
        {
            printf("\n");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }
            printf("You Have Selected 'Volume Of Cylinder'");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }

            // Input For Value Of Radius & Height Of Cylinder
            printf("\n\nEnter Value For Radius Of Cylinder :: ");
            scanf("%f", &radius);
            printf("\nEnter Value For Height Of Cylinder :: ");
            scanf("%f", &height);

            Cylinder_Volume(radius, height);

            printf("\n\nDo You Want To Return Back To The Menu? (Y/N) :: ");
            scanf("%s", &return_to_menu);
        }

        // If User Selects Option 5
        else if (option == 5)
        {
            printf("\n");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }
            printf("You Have Selected 'Volume Of Cone'");
            for (int i=0; i<20; i++)
            {
                printf("=");
            }

            // Input For Value Of Radius & Height Of Cone
            printf("\n\nEnter Value For Radius Of Cone :: ");
            scanf("%f", &radius);
            printf("\nEnter Value For Height Of Cone :: ");
            scanf("%f", &height);

            Cone_Volume(radius, height);

            printf("\n\nDo You Want To Return Back To The Menu? (Y/N) :: ");
            scanf("%s", &return_to_menu);
        }

        // If User Selects Option 6
        else if (option == 6)
        {
            break;
        }

        // If User Enters An Invalid Option
        else
        {
            printf("\n\nInvalid Input!! Try Again.\n\n");
        }

    }

    // Prompt After Exiting The Program
    printf("\nThank You For Using This Program");
    return 0;
}

// Function Declaration For Cube_Volume()
int Cube_Volume(float side)
{
    float cube_vol; // Variable Declaration For Value Of Side Of Cube & Volume Of Cube

    if (side > 0) // Checking If Input Values Are Positive
    {
        // Calculating & Displaying Volume Of Cube
        cube_vol = side * side * side;
        printf("\nThe Volume Of Cube With Given Side %.2f Is %.2f", side, cube_vol);
    }

    // Error Message Is Displayed If Value Is Zero And Returns To Beginning Of Function Again
    else
    {
        printf("\nValue Cannot Be Zero!!\n");
        Cube_Volume(side);
    }
}

// Function Declaration For Cuboid_Volume()
int Cuboid_Volume(float cuboid_length, float cuboid_breadth, float cuboid_height)
{
    float cuboid_vol;

    if (cuboid_length > 0 && cuboid_breadth > 0 && cuboid_height > 0) // Checking If Input Values Are Positive
    {
        // Calculating & Displaying Volume Of Cuboid
        cuboid_vol = cuboid_length * cuboid_breadth * cuboid_height;
        printf("\nThe Volume Of Cube With Given Length %.2f, Breadth %.2f, and Height %.2f Is %.2f", cuboid_length, cuboid_breadth, cuboid_height, cuboid_vol);
    }

    // Error Message Is Displayed If Value Is Zero And Returns To Beginning Of Function Again
    else
    {
        printf("Values Cannot Be Zero!!");
        Cuboid_Volume(cuboid_length, cuboid_breadth, cuboid_height);
    }
}

// Function Declaration For Sphere_Volume()
int Sphere_Volume(float sph_radius)
{
    float sphere_vol; // Variable Declaration For Value Of Radius Of Sphere & Volume Of Sphere

    if (sph_radius > 0) // Checking If Input Values Are Positive
    {
        // Calculating & Displaying Volume Of Sphere
        sphere_vol = 4 / 3.0 * (3.14159265 * sph_radius * sph_radius * sph_radius);
        printf("\nThe Volume Of Sphere With Given Radius %.2f Is %.2f", sph_radius, sphere_vol);
    }

    // Error Message Is Displayed If Value Is Zero And Returns To Beginning Of Function Again
    else
    {
        printf("\nValue Cannot Be Zero!!\n");
        Sphere_Volume(sph_radius);
    }
}

// Function Declaration For Cylinder_Volume()
int Cylinder_Volume(float cyl_radius, float cyl_height)
{
    // Variable Declaration For Value Of Radius & Height Of Cylinder & Volume Of Cylinder
    float cylinder_vol; 

    if (cyl_radius > 0 && cyl_height > 0) // Checking If Input Values Are Positive
    {
        // Calculating & Displaying Volume Of Cylinder
        cylinder_vol = 3.14159265 * cyl_radius * cyl_radius * cyl_height;
        printf("\nThe Volume Of Cylinder With Given Radius %.2f & Given Height %.2f Is %.2f", cyl_radius, cyl_height, cylinder_vol);
    }

    // Error Message Is Displayed If Value Is Zero And Returns To Beginning Of Function Again
    else
    {
        printf("\nValues Cannot Be Zero!!\n");
        Cylinder_Volume(cyl_radius, cyl_height);
    }
}

// Function Declaration For Cone_Volume()
int Cone_Volume(float cone_radius, float cone_height)
{
    // Variable Declaration For Value Of Radius & Height Of Cone & Volume Of Cone
    float cone_vol; 

    if (cone_radius > 0 && cone_height > 0) // Checking If Input Values Are Positive
    {
        // Calculating & Displaying Volume Of Cone
        cone_vol = (3.14159265 * cone_radius * cone_radius * cone_height) / 3;
        printf("\nThe Volume Of Cone With Given Radius %.2f & Given Height %.2f Is %.2f", cone_radius, cone_height, cone_vol);
    }

    // Error Message Is Displayed If Value Is Zero And Returns To Beginning Of Function Again
    else
    {
        printf("\nValues Cannot Be Zero!!\n");
        Cone_Volume(cone_radius, cone_height);
    }
}
