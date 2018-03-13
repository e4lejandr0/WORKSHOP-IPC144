#include <stdio.h>
#include <string.h>

#include "student.h"

struct student ask_user(void)
{
    struct student new_student;
    printf("Enter name: ");
    scanf("%s", new_student.name);
    printf("Enter age: ");
    scanf("%d", &new_student.age);

    return new_student;
}

void print_student(struct student stud)
{
    printf("Name: %s, Age: %d\n", stud.name,
                                  stud.age);
}
void update_name(struct student* stud, const char* name)
{
    /*!
        for(int i = 0; i < strlen(name); ++i) {
            stud->name[i] = name[i];
        }
    */
    strcpy(stud->name, name); // function from <string.h>
}

void print_students(struct student* students, int size)
{
    for(int i = 0; i < size; ++i) {
        print_student(students[i]);
    }
}
void sort_students(struct student* students, int size)
{
    for(int i = 0; i < size; ++i) {
        for(int j = 0; i < size; ++j) {
            if(strcmp(students[i].name, students[j].name) < 0) {
                students[i] = students[j];
            }
        }
    }
}



