#pragma once
struct Semester1 {
    int math, physic, programming;
};

struct Semester2 {
    int math, physic, drawing;
};

struct Student {
    char surname[25], name[20], patronymic[25];
    int course, year;
    struct Semester1 semester1;
    struct Semester2 semester2;
};
