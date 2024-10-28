#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../entity/students.h"
#include "func.h"
const int POSITIVE_NUMBERS = 30;
const int SUBJECT = 6;

struct Student *add(int size) {
    struct Student *student_ptr = (struct Student *) malloc(size * sizeof(struct Student));
    if (student_ptr == NULL) {
        printf("Out of memory\n");
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        list_student(student_ptr, i + 1);
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
