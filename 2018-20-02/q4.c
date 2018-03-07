#include <stdio.h>

int main(void)
{
    int i,
        j,
        n = 7;

    char a = '+';
    char b = '|';
    char c = '-';

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            if(j == i) {
                printf("%c", a);
            }
            else if((j % 2) == 0) {
                printf("%c", b);
            }
            else {
                printf("%c", c);
            }
        }
        printf("\n");
    }
    return0 ;
}
