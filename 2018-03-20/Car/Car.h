#ifndef CAR_H__
#define CAR_H__

struct Driver
{
    char first_name[81];
    char last_name[81];
};

struct Car
{
    struct Driver owner;
    char license_plate[11];
    char make[81];
    int age;
    float mileage;
};

void fill_car(struct Car* my_car);
void update_car(struct Car* old_car);
void print_car(const struct Car* car);

#endif
