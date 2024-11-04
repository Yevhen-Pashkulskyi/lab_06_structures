#ifndef STUDENTS_H
#define STUDENTS_H

//структура семестра 1
struct Semester1 {
    int math, physic, programming;
};

//структура семестра 2
struct Semester2 {
    int math, physic, drawing;
};

//структура студента з викликом структури семестра 1 та 2 з їх полями
struct Student {
    char surname[25], name[20], patronymic[25];
    int course, year;
    struct Semester1 semester1;
    struct Semester2 semester2;
};
#endif // STUDENTS_H
