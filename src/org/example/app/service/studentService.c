#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../entity/students.h"
#include "func.h"
const int POSITIVE_NUMBERS = 30;
const int SUBJECT = 6;
//функція створення студента з його даними
struct Student *created_student(int size) {
    //виділення пам'яті для кожного студента
    struct Student *student_ptr = (struct Student *) malloc(size * sizeof(struct Student));
    if (student_ptr == NULL) {
        printf("Out of memory\n");
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        //викликається студент з списку за індексом
        list_student(student_ptr, i + 1);
        /*записуються випадкові значення студенту за індексом*/
        student_ptr[i].course = random_num(1, 4);
        student_ptr[i].year = random_num(18, 50);

        student_ptr[i].semester1.math = random_num(0, 50);
        student_ptr[i].semester1.physic = random_num(0, 50);
        student_ptr[i].semester1.programming = random_num(0, 50);

        student_ptr[i].semester2.math = random_num(0, 50);
        student_ptr[i].semester2.physic = random_num(0, 50);
        student_ptr[i].semester2.drawing = random_num(0, 50);
    }
    return student_ptr;
}

//функція порівнює абсолютне значення студента та повертає його відсоток від всіх оцінок
float absolut_positive(struct Student *students, int index) {
    int count = 0;

    if (students[index].semester1.math >= POSITIVE_NUMBERS) {
        count++;
    }
    if (students[index].semester1.physic >= POSITIVE_NUMBERS) {
        count++;
    }
    if (students[index].semester1.programming >= POSITIVE_NUMBERS) {
        count++;
    }
    if (students[index].semester2.physic >= POSITIVE_NUMBERS) {
        count++;
    }
    if (students[index].semester2.math >= POSITIVE_NUMBERS) {
        count++;
    }
    if (students[index].semester2.drawing >= POSITIVE_NUMBERS) {
        count++;
    }

    return count / (float) SUBJECT * 100;
}
