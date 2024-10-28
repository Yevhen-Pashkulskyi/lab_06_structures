#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

int run();

struct Student *add(int size);

int random_num(int min, int max);

float absolut_positive(struct Student *students, int size);

void print(struct Student *students, int size);
#endif
