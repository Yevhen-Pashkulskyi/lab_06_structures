#include <stdio.h>
#include "../entity/students.h"
#include "../service/func.h"
// початкове меню
void show_menu() {
    printf(
        "1. Show all students.\n"
        "2. Show student.\n"
        "0. Exit.\n"
        "Make a choice:");
}

// список студентів для того щоб обрати можливо було когось конкретного
void show_all() {
    printf("1.Vinichenko Sergiy Vasilyovich\n"
        "2.Didenko Leonid Volodimirovich\n"
        "3.Dovgenko Sofia Vadimivna\n"
        "4.Zarechniy Maksim Dmitrovich\n"
        "5.Zaharkin Vladislav Vadimovich\n"
        "6.Karalaw Danilo Yuryevich\n"
        "7.Kolisnichenko Vladislav Mikolaevich\n"
        "8.Lepskiy Maksim Mikolaevich\n"
        "9.Linuchev Dmitro Genadievich\n"
        "10.Lukin Bogdan Andriovich\n");
    printf("11.Marcenyuk Mikita Andriovich\n"
        "12.Mihnevich Tehon Yurievich\n"
        "13.Ormangi Vitaliya Fedirivna\n"
        "14.Pashkulskyi Yevhen Valeriovich\n"
        "15.Stankov Stanislav Leonidovich\n"
        "16.Tkachenko Artem Sergiyovich\n"
        "17.Chernobriva Daria Volodimirivna\n"
        "18.Shersniova Nika Oleksandrivna\n"
        "19.Yusupiv Oleksandr Ruslanovich\n"
        "Make a choice:");
}

//друк студента з його данними
void print_student(struct Student *student, int size, int position) {
    for (int i = 0; i < size; i++) {
        if (i == position) {
            printf("Student %d: %s %s %s course:%d year:%d\n"
                   "Semester 1: math=%d physic=%d programing=%d\n"
                   "Semester 2: math=%d physic=%d drawing=%d\n absolute rate = %.2f %% \n\n", i + 1, student[i].surname,
                   student[i].name,
                   student[i].patronymic, student[i].course, student[i].year, student[i].semester1.math,
                   student[i].semester1.physic,
                   student[i].semester1.programming,
                   student[i].semester2.math, student[i].semester2.physic, student[i].semester2.drawing,
                   absolut_positive(student, i));
        }
    }
}

//друк всіх студентів з їхніми даними
void print_all_students(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d: %s %s %s course:%d year:%d\n"
               "Semester 1: math=%d physic=%d programing=%d\n"
               "Semester 2: math=%d physic=%d drawing=%d\n absolute rate = %.2f %% \n\n", i + 1, students[i].surname,
               students[i].name,
               students[i].patronymic, students[i].course, students[i].year, students[i].semester1.math,
               students[i].semester1.physic,
               students[i].semester1.programming,
               students[i].semester2.math, students[i].semester2.physic, students[i].semester2.drawing,
               absolut_positive(students, i));
    }
}
