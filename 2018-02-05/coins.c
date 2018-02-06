/*! Coin counter program
 *
 * Problem:
 *
 * Ask the user to input a number (whole number)
 * and calculate how many coins of $5, $2 and $1
 * they should receive as change
 */
#include <stdio.h>

int main(void)
{
    int input = 0;
    int two = 0,
        five = 0,
        one = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    if(input > 5) {
        five = input / 5;
        input = input % 5;
    }
    if(input > 2) {
        two = input / 2;
        input = input % 2;
    }
    one = input; /*! This could also be written as if(input == 1) { one = 1 } */

    printf("$5 coins = %d\n"
           "$2 coins = %d\n"
           "$1 coins = %d\n", five ,two, one);
    return 0;
}
