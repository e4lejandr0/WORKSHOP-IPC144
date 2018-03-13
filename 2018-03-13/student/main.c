#include <stdio.h>

#include "student.h"

int main(void)
{
    struct student students[] = { { "Margo", 19 },
                                  { "Alex" , 21 } };
    const int count = sizeof(students)/sizeof(struct student);
    struct student alex;

    alex  = ask_user();

    update_name(&alex, "Elmo");
    print_student(alex);

    print_students(students, count);
    sort_students(students, count);
    print_students(students, count);

    return 0;
}

    
