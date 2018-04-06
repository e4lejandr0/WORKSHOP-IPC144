#include <stdio.h>

void swap(int* first, int* second)
{
    int tmp = *first;
    *first = *second;
    *second = tmp;
}

int main(void)
{
    int a = 1,
        b = 2;
    printf("Before swap: a = %d | b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap:  a = %d | b = %d\n", a, b);

    return 0;
}
