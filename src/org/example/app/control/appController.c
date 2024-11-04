#include "../service/func.h"
#include <stdio.h>
#include <stdlib.h>
//функція вибору меню
int choice_menu() {
    int choice;
    scanf("%d", &choice);
    return choice;
}

// функція виконання програми вона поєднує всі функції
int run() {
    int size_student = 19;
    struct Student *students = created_student(size_student); //показчик на створенного студента
    show_menu();
    switch (choice_menu()) {
        case 1:
            if (students != NULL) {
                print_all_students(students, size_student);
                free(students);
            }
            run(); //рекурсія
            break;
        case 2:
            show_all();
            if (students != NULL) {
                print_student(students, size_student, choice_menu() - 1);
                free(students);
            }
            run();
            break;
        case 0:
            break;
        default:
            printf("Invalid choice\n");
            run();
            break;
    }
    return 0;
}
