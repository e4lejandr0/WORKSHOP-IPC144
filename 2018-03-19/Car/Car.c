#include <stdio.h>

#include "Car.h"

void fill_car(struct Car* my_car)
{

    /*! (*my_car).owner is equivalent to my_car->owner */
    printf("Enter owner first name: ");
    scanf("%s", my_car->owner.first_name);
    printf("Enter owner last name: ");
    scanf("%s", my_car->owner.last_name);
    printf("Enter license plate: ");
    scanf("%s", my_car->license_plate);
    printf("Enter make: ");
    scanf("%s", my_car->make);
    printf("Enter age of the car: ");
    scanf("%d", &my_car->age);
    printf("Enter mileage: ");
    scanf("%f", &my_car->mileage);
}

void update_car(struct Car* old_car)
{
    printf("Enter new owner first name: ");
    scanf("%s", old_car->owner.first_name);
    printf("Enter new owner last name: ");
    scanf("%s", old_car->owner.last_name);
}

void print_car(const struct Car* car)
{
    printf("%s %s\t%s\t%s\t%d\t%.2f\n", car->owner.first_name
                                      , car->owner.last_name
                                      , car->license_plate
                                      , car->make
                                      , car->age
                                      , car->mileage);
}

