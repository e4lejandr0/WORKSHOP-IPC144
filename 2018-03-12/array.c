#include <stdio.h>

float average(float numbers[], int size) /*! Equivalent to float average(float* numbers, int size) */
{
    float avg = 0.0f;
    float sum = 0.0f;
    for(int i = 0; i < size; ++i) {
        sum = sum + numbers[i];
    }
    
    avg = sum / size;

    /*! the return keyword allows to return a value to the call site of the function:
     * float my_var = average(numbers, size);
     *                ~~~~~~~~~~~~~~~~~~~~~~ => will be replaced with the value that is being returned
     */
    return avg;
}

/*! void functions don't return anything */
void ask_user(float* numbers, int size)
{
    for(int i = 1; i <= size; ++i) {
        printf("%d. Enter a number: ", i);
        scanf("%f", &numbers[i]);
    }
}

int main(void)
{
    float numbers[100] = {0};
    int size = 0;

    printf("How many numbers do you want to enter?(max 100) ");
    scanf("%d", &size);

    /* ask_user doesn't return any values */
    ask_user(numbers, size);

    /* average returns a number, we can use the result */
    printf("average of numbers = %.2f\n", average(numbers, size)); 
                                     /*!  ~~~~~~~~~~~~~~~~~~~~~~~ => Gets replaced by the returned value */

    return 0;
}
