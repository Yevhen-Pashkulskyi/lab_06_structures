#include "../service/func.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void viewMenu() {
    printf("1. Start program"
        "\n0. Stop program\n"
        "\nEnter your choice:");
}

int run() {
    srand(time(NULL));
    int size = random_num(1, 5);
    viewMenu();
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("\nsize students: %d \n", size);
            fflush(stdin);
            struct Student *students = created_Student(size);
            if (students != NULL) {
                print(students, size);
                free(students);
            }
            run();
        case 0:
            break;
        default: printf("Invalid choice\n");
            fflush(stdin);
            run();
    }

    return 0;
}
