#include <stdio.h>

int main(void)
{
    /*! input array */
    int input[3][3] = { {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9} };

    /*! Output array */
    int output[3][3] = {0};

    const int size = 3;

    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            output[j][i] = input[i][j];
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }

    return 0;
}

