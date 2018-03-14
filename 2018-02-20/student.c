#include <stdio.h>

struct Student
{
    char name[110];
    int age;
};

struct Course 
{
    char code[7];
    char grade;
};

int main(void)
{
    struct Student students[3];
    struct Course courses[] = {  {"JAC444", 'A'},
                                 {"IPC144", 'B'},
                                 {"APC100", 'F'}
                              };


    for(int i = 0; i < 3; i++) {
        printf("Enter your name: ");
        scanf("%s", students[i].name);

        printf("Enter your age: ");
        scanf("%d", &students[i].age);
    
    }

    printf("Student name - Course name - Grade\n");
    for(int i = 0; i < 3; i++) {
        printf("%s - %s - %c\n", students[i].name,
                                 courses[i].code,
                                 courses[i].grade);
    }
    return 0;
}
