#include <stdio.h>

struct OneCard
{
    int id_num;
    char fname[21];
    char lname[21];
};

int main(void)
{

    struct OneCard my_card[20];


    for(int i = 0; i < 3; i++) {
        printf("Student ID: ");
        scanf("%d", &my_card[i].id_num);
        printf("First name: ");
        scanf("%s", my_card[i].fname);
        printf("Last name: ");
        scanf("%s", my_card[i].lname);
    }

    printf("Student number -- First Name, Last Name\n");

    for(int i = 0; i < 3; i++) {
        printf("%d -- %s, %s\n", my_card[i].id_num,
                                 my_card[i].fname,
                                 my_card[i].lname);
    }
    return 0;
}
