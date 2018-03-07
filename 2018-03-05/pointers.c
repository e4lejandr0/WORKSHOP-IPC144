#include <stdio.h>



int main(void)
{

    int first = 6;
    int second = 5;
    char name[] = "Alex";
    char *initial = name; //pointer to name
    int *ptr = &first; //pointer to first

    printf("initial address = %p, initial = %s\n", initial, initial);

    printf("first = %d, &first = %p\n", first, &first);
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr /*ptr is pointing to  first, *ptr will get the value of first*/);
    scanf("%s", name);
    ptr = &second; // ptr now points to second
    *ptr = 6; // the value that ptr is pointing to(second) will change to 6

    printf("first = %d, &first = %p\n", first, &first);
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);

    return 0;
}
