#include <stdio.h>

struct student 
{
    char name[21];
    int age;
};

int main(void)
{
    int a = 0;
    int* b = &a;
    printf("a = %d, &a = %p\n", a, &a);
    printf("b = %p, *b = %d\n", b, *b);
    return 0;
}
