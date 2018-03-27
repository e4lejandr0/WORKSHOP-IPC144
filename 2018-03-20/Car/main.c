#include <stdio.h>

#include "Car.h"

int main(void)
{
    /*! Set the array to 0 */
    struct Car cars[100] = { {0} };
    int car_count = 0;
    int pos_update = -1;

    /*! Ask how many cars */
    printf("How many cars would you like to add? (max 100) ");
    scanf("%d", &car_count);

    /*! Fill each car */
    for(int i = 0; i < car_count; ++i) {
        fill_car(&cars[0]);
    }

    /*! Print table headers */
    printf("%s\t%s\t%s\t%s\t%s\n", "Full Name"
                                 , "License plate"
                                 , "Make"
                                 , "Age"
                                 , "Mileage");

    /*! print table */
    for(int i = 0; i < car_count; ++i) {
        print_car(&cars[i]);
    }
    
    printf("Which position would you like to update? ");
    scanf("%d", &pos_update);

    if(pos_update > car_count) {
        printf("Error: not enough cars\n");
        /*! return with a non-zero value to signify failure */
        return 1;
    }

    update_car(&cars[pos_update-1]);

    /*! Print table headers */
    printf("%s\t%s\t%s\t%s\t%s\n", "Full Name"
                                 , "License plate"
                                 , "Make"
                                 , "Age"
                                 , "Mileage");
    /*! print table */
    for(int i = 0; i < car_count; ++i) {
        print_car(&cars[i]);
    }

    return 0;
}
