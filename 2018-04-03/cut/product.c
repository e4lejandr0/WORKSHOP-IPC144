#include <stdio.h>

#include "product.h"

void getProductInfo(struct Product* product)
{
    printf("Enter product name: ");
    scanf("%s", product->name);
    printf("Enter product price: ");
    scanf("%f", &product->price);
    printf("Enter product color: ");
    scanf("%s", product->color);
}

void displayProduct(const struct Product* product)
{
    printf("Product Name: %s\n"
           "Product Price: %.2f\n"
           "Product Color: %s\n", product->name,
                                  product->price,
                                  product->color);
}

void storeProduct(FILE* outputFile, const struct Product* product)
{
    fprintf(outputFile, "%s,%f,%s\n", product->name,
                                      product->price,
                                      product->color);
}

void readProducts(FILE* inputFile, struct Product* products, int* size)
{
    *size = 0;
    while(!feof(inputFile)) {
        fscanf(inputFile, "%[^,],%f,%[^\n]\n", products[*size].name,
                                        &products[*size].price,
                                        products[*size].color);
        (*size)++;
    }
}

