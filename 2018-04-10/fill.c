#include <stdio.h>
#define SIZE 10

void fill(int arr[SIZE][SIZE]) {

    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            if(i == j) {
                arr[i][j] = 0;
            }
            else {
                arr[i][j] = 1;
            }
        }
    }
}

int main(void)
{
    int a[SIZE][SIZE] = {0};

    fill(a);

    
    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
