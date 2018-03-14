#include <stdio.h>

int sort(int* arrs, int size)
{
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            if(arrs[i] < arrs[j]) {
                int tmp = arrs[i];
                arrs[i] = arrs[j];
                arrs[j] = tmp;
            }
        }
    }
}

int main(void)
{
    int nums[] = { 6, 7, 4, 2, 3, 1, 9, 8, 0 };
    int size = 10;

    printf("Not sorted: ");
    for(int i = 0; i < size; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    sort(nums, size);

    printf("Sorted: ");
    for(int i = 0; i < size; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
