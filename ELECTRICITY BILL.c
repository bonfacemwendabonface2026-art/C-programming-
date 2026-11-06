#include <stdio.h>

// Function to calculate electricity bill
float calculateBill(int units)
{
    float bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main()
{
    int units;
    float bill;

    // Ask the user for units
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    // Call the function
    bill = calculateBill(units);

    // Display results
    printf("Units consumed: %d\n", units);
    printf("Total electricity bill: KSh %.2f\n", bill);

    return 0;
}