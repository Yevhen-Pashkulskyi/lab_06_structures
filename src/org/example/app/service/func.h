#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

//всі функція які я створював
int run();

struct Student *created_student(int size);

int random_num(int min, int max);

float absolut_positive(struct Student *students, int size);

void list_student(struct Student *student, int student_number);

void show_menu();

void show_student();

void show_all();

void print_all_students(struct Student *students, int size);

void print_student(struct Student *student, int size, int position);
#endif
