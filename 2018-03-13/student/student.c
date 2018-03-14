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

/*! print_student: prints a single student */
void print_student(struct student stud)
{
    printf("Name: %s, Age: %d\n", stud.name,
                                  stud.age);
}
/*! update_name: updates the name of the student */
void update_name(struct student* stud, const char* name)
{
    /*!
        for(int i = 0; i < strlen(name); ++i) {
            stud->name[i] = name[i];
        }
    */
    strcpy(stud->name, name); // function from <string.h>
}

/*! print_students: Prints an array of students, one by one */
void print_students(struct student* students, int size)
{
    for(int i = 0; i < size; ++i) {
        print_student(students[i]);
    }
}

/*! swap_students: Swaps to students in place.
 *  
 *  Consider this code:
 *      int a = 1;
 *      int b = 2;
 *      
 *  We swap a and b in this way:
 *      int tmp;
 *      tmp = b;
 *      b = a;
 *      a = tmp;
 */
void swap_students(struct student* first, struct student* second)
{
    if(first == second) return; //if first and second point to the same variable, then we don't do anything

    struct student tmp; // temporary student to store the information while we swap them

    /*! copy all the info from first into tmp */
    tmp.age = first->age;
    strcpy(tmp.name, first->name);

    /*! first = second; */
    first->age = second->age;
    strcpy(first->name, second->name);

    /*! second = tmp; */
    second->age = tmp.age;
    strcpy(second->name, tmp.name);
}
    
/*! sort_students: sorts an array of students alphabetically
 *
 * This is an implementation of the bubblesort algorithm
 * first animation from google: http://www.cs.armstrong.edu/liang/animation/web/BubbleSort.html
 * algorithm explanation: https://www.geeksforgeeks.org/bubble-sort/
 */
void sort_students(struct student* students, int size)
{
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            /*! Synopsis of strcmp: (source: http://www.cplusplus.com/reference/cstring/strcmp/)
             *                               sidenote: be really wary of cplusplus.com, it's not a good source
             *
             * int strcmp ( const char * str1, const char * str2 );
             *
             * Compare two strings
             * Compares the C string str1 to the C string str2.
             *
             * This function starts comparing the first character of each string.
             *
             * If they are equal to each other, it continues with the following pairs
             * until the characters differ or until a terminating null-character is reached.
             */
            if(strcmp(students[i].name, students[j].name) < 0) {
                swap_students(&students[i], &students[j]);
            }
        }
    }
}



