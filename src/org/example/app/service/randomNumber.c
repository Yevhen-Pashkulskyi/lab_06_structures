#include <stdlib.h>
//функція випадкового числа
int random_num(int min, int max) {
    return rand() % (max - min + 1) + min;
}
