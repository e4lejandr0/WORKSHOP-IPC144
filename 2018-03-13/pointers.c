#include <stdio.h>

int main(void)
{
    int a = 0;
    int* b = &a;

    printf("a = %d, &a = %p\n", a, &a);
    printf("b = %p, *b = %d\n", b, *b);
    return 0;
}
