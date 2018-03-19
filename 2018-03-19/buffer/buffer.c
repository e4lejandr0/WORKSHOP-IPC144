#include <stdio.h>

int main(void)
{
    /*! clear buffer */
    char c;
    while( (c = getchar()) != EOF && c != '\n' );

    return 0;

}
