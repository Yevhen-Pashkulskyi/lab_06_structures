#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../entity/students.h"
#include "../service/func.h"


struct Student *add(int size) {
    struct Student *student_ptr = (struct Student *) malloc(size * sizeof(struct Student));
    if (student_ptr == NULL) {
        printf("Out of memory\n");
        exit(1);
    }

    printf("Student created\n");
    for (int i = 0; i < size; i++) {
        printf("Surname: ");
        fgets(student_ptr[i].surname, sizeof(student_ptr[i].surname), stdin);
        strtok(student_ptr[i].surname, "\n");

        printf("Name: ");
        fgets(student_ptr[i].name, sizeof(student_ptr[i].name), stdin);
        strtok(student_ptr[i].name, "\n");

        printf("Patronymic: ");
        fgets(student_ptr[i].patronymic, sizeof(student_ptr[i].patronymic), stdin);
        strtok(student_ptr[i].patronymic, "\n");

        student_ptr[i].course = random_num(1, 4);

        // printf("Year of University: ");
        student_ptr[i].year = random_num(18, 50);
        // getchar();

        // printf("1 semester math: ");
        student_ptr[i].semester1.math = random_num(0, 100);
        // getchar();

        // printf("1 semester physic: ");
        student_ptr[i].semester1.physic = random_num(0, 100);
        // getchar();

        // printf("1 semester programming: ");
        student_ptr[i].semester1.programming = random_num(0, 100);
        // getchar();

        // printf("2 semester math: ");
        student_ptr[i].semester2.math = random_num(0, 100);
        // getchar();
        // printf("2 semester physic: ");
        student_ptr[i].semester2.physic = random_num(0, 100);
        // getchar();
        // printf("2 semester drawing: ");
        student_ptr[i].semester2.drawing = random_num(0, 100);
        // getchar();
    }
    return student_ptr;
}

void print(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d: %s %s %s %d %d\n%d %d %d\n%d %d %d\n", i + 1, students[i].surname, students[i].name,
               students[i].patronymic,students[i].course, students[i].year, students[i].semester1.math, students[i].semester1.physic,
               students[i].semester1.programming,
               students[i].semester2.math, students[i].semester2.physic, students[i].semester2.drawing);
    }
}
