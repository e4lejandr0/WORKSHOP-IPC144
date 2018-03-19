#include <stdio.h>

#include "student.h"

int main(void)
{
    /*! we define a list of students */
    struct student students[] = { { "Franklin Paddock", 19 },
                                  { "Joe Hartsock", 25 },
                                  { "Larry Allen" , 22 },
                                  { "Michael Garnett" , 21 },
                                  { "Sam Corrion" , 21 },
                                  { "Alex", 21 },
                                  { "Margaryta", 19 } };

    // const int count = sizeof(students)/sizeof(struct student); <-- calculating the size of the array using sizeof() but don't worry about it too much
    const int count = 7;

    /*! print the students */
    printf("Printing unordered students...\n");
    printf("------ Students------\n");
    print_students(students, count);

    /*! update the first student name to "Matt Baker" */
    update_name(&students[0], "Matt Baker");

    /*! sort the list of students alphabetically */
    sort_students(students, count);

    /*! print the now sorted list */
    printf("\nPrinting students ordered by name...\n");
    printf("------ Students------\n");
    print_students(students, count);

    return 0;
}

    
