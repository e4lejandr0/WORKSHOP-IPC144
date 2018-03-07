#include <stdio.h>

struct Human
{
    int age;
    char name[11];
};


int main(void)
{
    struct Human people[100];

    int youngest_idx = 0; // The index of the  youngest person
    int oldest_idx = 0;   // The index of the  oldest person

    float avg = 0.0f;
    int human_count = 0;

    /* Ask how many employees to add */
    printf("How many humans? (max 100) ");
    scanf("%d", &human_count);

    /* For each employee, ask for the name and age */
    for(int i = 0; i < human_count; i++) {

        printf("Enter your name: ");
        scanf("%s", people[i].name); // there's no need for '&' when reading a string of chars
        printf("Enter your age: ");
        scanf("%d", &people[i].age);
        avg += people[i].age;

        /* if the current person is younger than the youngest,
         * we store the index 
         */
        if(people[youngest_idx].age > people[i].age) {
            youngest_idx = i;
        }

        /* if the current person is older than the oldest,
         * we store the index 
         */
        if(people[oldest_idx].age < people[i].age) {
            oldest_idx = i;
        }
    }

    /* We want to print a table with the humans:
     * Human#   Name    Age
     * 1        Alex    21
     *
     * Here we print the header:
     */
    printf("Human#\tName\tAge\n");

    for(int i = 0; i < human_count; ++i) {
        printf("%d\t%s\t%d\n", i+1, people[i].name, people[i].age);
    }

    avg = avg / human_count; // calculate the average
    printf("Average age: %.2f\n", avg);
    printf("Oldest employee: %s, %d\n", people[oldest_idx].name, people[oldest_idx].age);
    printf("Youngest employee: %s, %d\n", people[youngest_idx].name, people[youngest_idx].age);

    return 0;
}

