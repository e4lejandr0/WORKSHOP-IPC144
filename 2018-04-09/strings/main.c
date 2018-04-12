#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 101

int main(void)
{
    char firstName[MAX_LENGTH] = "Homer ";
    char lastName[MAX_LENGTH] = "Simpson";

    char fullName[MAX_LENGTH*2 + 1] = {0};

    /*! Concatenate */
    printf("fullName = \"%s\"\n", fullName);
    strcat(fullName, firstName);
    printf("fullName = \"%s\"\n", fullName);
    strcat(fullName, lastName);
    printf("fullName = \"%s\"\n", fullName);

    /*! Copy */
    printf("Before strcpy: firstName = %s\n", firstName);
    strcpy(firstName, "Marge");
    printf("After strcpy: firstName = %s\n", firstName);

    /*! Get length */
    int length = strlen(fullName);
    printf("strlen(fullName) = %d\n", length);

    /*! String comparison */
    if(strcmp(fullName,  "Marge Simpson") == 0) {
        printf("fullName is Marge Simpson\n");
    }
    else {
        printf("fullName is not Marge Simpson\n");
    }

    return 0;
}
