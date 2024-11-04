#include <string.h>

#include "../entity/students.h"
//список студентів за викликом
void list_student(struct Student *student, int student_number) {
    switch (student_number) {
        case 1:
            strcpy(student[student_number - 1].surname, "Vinichenko");
            strcpy(student[student_number - 1].name, "Sergiy");
            strcpy(student[student_number - 1].patronymic, "Vasilyovich");
            break;
        case 2:
            strcpy(student[student_number - 1].surname, "Didenko");
            strcpy(student[student_number - 1].name, "Leonid");
            strcpy(student[student_number - 1].patronymic, "Volodimirovich");
            break;
        case 3:
            strcpy(student[student_number - 1].surname, "Dovgenko");
            strcpy(student[student_number - 1].name, "Sofia");
            strcpy(student[student_number - 1].patronymic, "Vadimivna");
            break;
        case 4:
            strcpy(student[student_number - 1].surname, "Zarechniy");
            strcpy(student[student_number - 1].name, "Maksim");
            strcpy(student[student_number - 1].patronymic, "Dmitrovich");
            break;
        case 5:
            strcpy(student[student_number - 1].surname, "Zaharkin");
            strcpy(student[student_number - 1].name, "Vladislav");
            strcpy(student[student_number - 1].patronymic, "Vadimovich");
            break;
        case 6:
            strcpy(student[student_number - 1].surname, "Karalaw");
            strcpy(student[student_number - 1].name, "Danilo");
            strcpy(student[student_number - 1].patronymic, "Yuryevich");
            break;
        case 7:
            strcpy(student[student_number - 1].surname, "Kolisnichenko");
            strcpy(student[student_number - 1].name, "Vladislav");
            strcpy(student[student_number - 1].patronymic, "Mikolaevich");
            break;
        case 8:
            strcpy(student[student_number - 1].surname, "Lepskiy");
            strcpy(student[student_number - 1].name, "Maksim");
            strcpy(student[student_number - 1].patronymic, "Mikolaevich");
            break;
        case 9:
            strcpy(student[student_number - 1].surname, "Linuchev");
            strcpy(student[student_number - 1].name, "Dmitro");
            strcpy(student[student_number - 1].patronymic, "Genadievich");
            break;
        case 10:
            strcpy(student[student_number - 1].surname, "Lukin");
            strcpy(student[student_number - 1].name, "Bogdan");
            strcpy(student[student_number - 1].patronymic, "Andriovich");
            break;
        case 11:
            strcpy(student[student_number - 1].surname, "Marcenyuk");
            strcpy(student[student_number - 1].name, "Mikita");
            strcpy(student[student_number - 1].patronymic, "Andriovich");
            break;
        case 12:
            strcpy(student[student_number - 1].surname, "Mihnevich");
            strcpy(student[student_number - 1].name, "Tehon");
            strcpy(student[student_number - 1].patronymic, "Yurievich");
            break;
        case 13:
            strcpy(student[student_number - 1].surname, "Ormangi");
            strcpy(student[student_number - 1].name, "Vitaliya");
            strcpy(student[student_number - 1].patronymic, "Fedirivna");
            break;
        case 14:
            strcpy(student[student_number - 1].surname, "Pashkulskyi");
            strcpy(student[student_number - 1].name, "Yevhen");
            strcpy(student[student_number - 1].patronymic, "Valeriovich");
            break;
        case 15:
            strcpy(student[student_number - 1].surname, "Stankov");
            strcpy(student[student_number - 1].name, "Stanislav");
            strcpy(student[student_number - 1].patronymic, "Leonidovich");
            break;
        case 16:
            strcpy(student[student_number - 1].surname, "Tkachenko");
            strcpy(student[student_number - 1].name, "Artem");
            strcpy(student[student_number - 1].patronymic, "Sergiyovich");
            break;
        case 17:
            strcpy(student[student_number - 1].surname, "Chernobriva");
            strcpy(student[student_number - 1].name, "Daria");
            strcpy(student[student_number - 1].patronymic, "Volodimirivna");
            break;
        case 18:
            strcpy(student[student_number - 1].surname, "Shersniova");
            strcpy(student[student_number - 1].name, "Nika");
            strcpy(student[student_number - 1].patronymic, "Oleksandrivna");
            break;
        case 19:
            strcpy(student[student_number - 1].surname, "Yusupiv");
            strcpy(student[student_number - 1].name, "Oleksandr");
            strcpy(student[student_number - 1].patronymic, "Ruslanovich");
            break;
    }
}
