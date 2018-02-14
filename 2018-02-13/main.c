/*!
 * Problem: Create a program that
 * gets a number from the user and prints
 * the following pattern:
 *
 * input = 5
   *
   * *
   * * *
   * * * *
   * * * * *
*/

#include <stdio.h>

int main(void)
{
    int user_input = -1; // It is not needed to initialize this variable

    do {
        /* Ask the user for input */
        printf("Enter a number(0 to exit): ");
        scanf("%d", &user_input);

        /* Print as many lines as the user entered */
        for(int line_count = 0; line_count < user_input; line_count++) {

            /* For each line print as many asterisks as the current line number */
            for(int j = 0; j < line_count+1; j++) {
                printf("* ");
            }

            printf("\n");
        }

    } while(user_input != 0); // We ask for input while the user hasn't entered 0

    return 0;
}
