/**
 * Problem:
 *
 * Ask the user for a number,
 * calculate the change(loonies, quarters) and tax amount
 */

#include <stdio.h>

int main(void)
{
    double gst = 0.0;
    double amount = 0.0;
    double balance = 0.0;

    /*! Amount of coins for each coin type */
    int loonies = 0;
    int quarters = 0;
    int dimes = 0;

    /* Ask for user input */
    printf("Please enter the amount to be paid: ");
    scanf("%lf", &amount);

    /* Calculations */

    gst = amount * 0.13 + 0.005;

    // This is equivalent to amount = amount + gst;
    amount += gst;
    /* loonies = amount is equivalent */
    loonies = (int)amount;
    balance = amount - loonies;

    /* This two statements are equivalent 
     * quarters = (balance * 100)/(0.25 * 100);
     */
    quarters = (balance * 100)/25;
    balance = balance - (quarters * 0.25);

    /* Printing */
    printf("GST: %.2lf\n", gst);
    printf("Balance owing: %.2lf\n", amount);
    printf("Loonies required: %d, Balance owing: %.2lf\n", loonies, amount-loonies);
    printf("Quarters: %d, remaining balance: %.2lf\n", quarters, balance);
    
    dimes = (balance * 100) / 10; // number of dimes
    balance = ( (int)(balance * 100) ) % 10; // rest of the balance after taking the dimes
    printf("Dimes: %d\n"
           "Balance left: %.2lf\n", dimes, balance);

    return 0;
}

