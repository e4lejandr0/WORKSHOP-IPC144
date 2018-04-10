#include <stdio.h>

int main(void)
{
    int size = -1;
    printf("How many numbers would you like to enter? ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; ++i) {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; ++i) {
        printf("%d - %d\n", i+1, arr[i]);
    }


    return 0;
}
