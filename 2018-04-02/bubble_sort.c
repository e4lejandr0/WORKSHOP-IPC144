#include <stdio.h>
#include <string.h>

//void bubble_sort(char*[] strings, int size)
void bubble_sort(int* array, int size)
{
    int tmp;
    
    for(int i = 0; i < size - 1; ++i) {
        for(int j = 0; j < size - 1; ++j) {
            if(array[j] > array[j+1]) {
                //swap(array[j], array[j+1]);

                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

int main(void)
{
    int nums[] = { 7, 2, 3, 4, 6, 1, 2 };
    int size = 6;
    //int size = sizeof(nums) / sizeof(int);

    for(int i = 0; i < size; ++i) {
        printf("Num: %d\n", nums[i]);
    }

    bubble_sort(nums, size);
    printf("-----------------------\n");

    for(int i = 0; i < size; ++i) {
        printf("Num: %d\n", nums[i]);
    }
    return 0;
}
