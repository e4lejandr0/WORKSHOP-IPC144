#include <stdio.h>
#include <stdlib.h>

#include "product.h"

int main(void)
{
    FILE* inputFile = fopen("data.txt", "r");
    FILE* namesFile = fopen("namesAndColors.txt", "w");
    FILE* colorsFile = fopen("colors.txt", "w");

    if(inputFile == NULL || namesFile == NULL || colorsFile == NULL) {
        printf("Error opening files.\n");
        return EXIT_FAILURE;
    }


    struct Product products[MAX_LENGTH];
    int productCount = 0;

    readProducts(inputFile, products, &productCount);

    for(int i = 0; i < productCount; ++i) {
        fprintf(namesFile, "%s\t%.2f\n", products[i].name,
                                         products[i].price);
        fprintf(colorsFile, "%s\n", products[i].color);
    }

    return 0;
}
