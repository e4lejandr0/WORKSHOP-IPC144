#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void clearBuffer()
{
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(void)
{
    char creditCardNumber[20] = "";
    printf("Enter credit card number: ");
    scanf("%[^\n]", creditCardNumber);
    clearBuffer();

    // strlen("1234");
    int creditCardLength = strlen(creditCardNumber);
    if(creditCardLength >= 13 &&
       creditCardLength <= 19) {
        for(int i = 0; i < creditCardLength; ++i) {
            if(!isdigit(creditCardNumber[i])) {
                printf("Invalid credit card\n");
                return EXIT_FAILURE;
            }
        }

        // The credit card is valid here
        FILE* creditFile = fopen("credit.txt", "w");
        if(creditFile == NULL) {
            printf("Can't open file\n");
            return EXIT_FAILURE;
        }

        fprintf(creditFile, "%s\n", creditCardNumber);

        fclose(creditFile);
    }
    else {
        printf("Invalid credit card\n");
        return EXIT_FAILURE;
    }


    return 0;
}
