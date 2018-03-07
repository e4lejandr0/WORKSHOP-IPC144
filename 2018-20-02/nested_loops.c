#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j < 10; ++j) {
            printf("%d x %d = %d\n", i+1, j+1, (j+1)*(i+1));
        }
    }
    return 0;
}
