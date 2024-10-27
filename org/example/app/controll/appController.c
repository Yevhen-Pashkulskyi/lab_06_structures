#include "../service/func.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int run() {
    srand(time(NULL));
    int size = random_num(1, 5);
    printf("size students: %d ", size);
    // scanf("\n%d", &size);
    getchar();
    struct Student *students = add(size);
    if (students != NULL) {
        print(students, size);
        free(students);
    }
    return 0;
}
