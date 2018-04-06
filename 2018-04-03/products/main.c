#include <stdio.h>
#include <stdlib.h>

#include "product.h"

int main(void)
{
    FILE* fp = NULL;
    fp = fopen("data.txt", "w");
    if(fp != NULL) {
        struct Product products[MAX_LENGTH];
        int productCount = -1;

        printf("How many products would you like to enter? "); 
        scanf("%d", &productCount);

        for(int i = 0; i < productCount; ++i) {
            getProductInfo(&products[i]);
        }

        printf("List of entered products: \n");
        for(int i = 0; i < productCount; ++i) {
            displayProduct(&products[i]);
            storeProduct(fp, &products[i]);
        }

        fclose(fp);
        printf("Reading from file...\n");

        fp = fopen("data.txt", "r");
        if(fp == NULL) {
            printf("Error opening file.\n");
            return EXIT_FAILURE;
        }

        readProducts(fp, products, &productCount);
        for(int i = 0; i < productCount; ++i) {
            displayProduct(&products[i]);
        }
    }
    else {
        printf("Error opening file.\n");
        return EXIT_FAILURE;
    }

    return 0;
}
