#include <stdio.h>

int main(void)
{
    /* This program prints the multiplication tables
     * from 2 to 10:
     * 2x2 = 4
     * 2x3 = 6
     * ...
     *
     * 10x1 = 10
     * ...
     * 10x10 = 100
     */

    for(int i = 2; i < 11; i++) {
        for(int j = 1; j < 11; j++) { 
            printf("%d x %d = %d\n", i, j, j*i);
        }
    }
    return 0;
}
