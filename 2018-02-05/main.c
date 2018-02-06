/*! FizzBuzz Example program
 *
 * Problem:
 *
 * Count the numbers from 1 to 100
 * if the number is divisible by 3 print "Fizz"
 * if the number is divisible by 5 print "Buzz"
 * if the number is divisible by 3 and 5 print "FizzBuzz"
 * if the number is not divisible by both print the number
 *
 */
#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 100; i++) {
        /*! A number is divisible by another if the remainder
         * of the division is == 0
         */
        if(i % 5 == 0 && i % 3 == 0) {
            printf("FizzBuzz ");
        }
        else if(i % 3 == 0) {
            printf("Fizz ");
        }
        else if(i % 5 == 0) {
            printf("Buzz ");
        }
        else  {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
