#define MAX_LENGTH 101

struct Product
{
    char name[MAX_LENGTH];
    float price;
    char color[MAX_LENGTH];
};



void getProductInfo(struct Product* product);
void displayProduct(const struct Product* product);
void storeProduct(FILE* outputFile, const struct Product* product);
void readProducts(FILE* inputFile, struct Product* products, int* size);
