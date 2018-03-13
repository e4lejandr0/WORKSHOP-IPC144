
/*! Student definition */
struct student
{
    char name[21];
    int age;
};


struct student ask_user();
void update_name(struct student* stud, const char* name);
void print_student(struct student stud);
void sort_students(struct student* students, int size);
void print_students(struct student* students, int size);
