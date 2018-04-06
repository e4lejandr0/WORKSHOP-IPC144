#include <stdio.h>


int main(void)
{
    FILE* my_file = fopen("file1.txt", "r");
    if(my_file != NULL) {
        printf("error");
        return EXIT_FAILURE;
    }

    int my_int = 0;
    fscanf(my_file, "%d", &my_int);
    fprintf(my_file, "My int = %d\n", my_int);

    fscanf(stdin, "%d", &my_int);
    fprintf(stdout, "My int = %d\n", my_int);

    fclose(my_file);


    return 0;
}

