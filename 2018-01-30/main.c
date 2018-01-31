#define _CRT_SECURE_NO_WARNINGS

/* For printf() and scanf() */
#include <stdio.h>

int main(void)
{
	int input = 0;
	
	/* do { ... } while(condition); Example
	 *
	 * This loop will run as long as the condition is true
	 * The condition is checked at the END of every iteration
         */
	do {
		printf("Enter a number [1, 20](0 to exit): ");
		scanf("%d", &input);
		if (input >= 1 && input <= 20) {
			/* for(init; condition; post-loop-operations) { ... } Example
			 * 
                         * This loop repeats as long as the condition is true. It contains three sections
			 * - init: A section where you can declare or set variables, it's executed before the first iteration of the loop
			 * - condition: The condition of the loop, if false the loop stops
			 * - post-loop-operation: code that is executed at the end of every iteration of the loop
			 */
			int counter = 0;
			for (; counter < input; counter = counter + 1) {
				printf("*");
			}
			printf("\n");
		}
		else if (input == 0) {
			printf("Goodbye!\n");
		}
		else {
			printf("Invalid number, try again...\n");
		}
	} while (input != 0);

	return 0;
}
