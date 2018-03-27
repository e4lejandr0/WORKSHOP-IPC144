#include <stdio.h>

void by_value(int num)
{
    printf("by_value...\n");
    printf("num = %d\n", num);
    printf("&num = %p\n", &num);
}

void by_pointer(int* num)
{
    printf("by_pointer...\n");
    printf("num = %p\n", num);
    printf("*num = %d\n", *num);
}


int main(void)
{
    int num = 2;
    printf("main...\n");
    printf("&num = %p\n", &num);
    printf("num = %d\n", num);

    // num == 2, 
    by_value(num);
    by_pointer(&num);

    return 0;
}
