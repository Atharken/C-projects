#include <stdio.h>

typedef struct employee {
    char name[50];
    int id;
    float salary;
} employee;

typedef employee employees[3];



int main() {

    employees emp = {
        {"athar,1,30000.00"},
        {"lol,2,30000.00"},
        {"ken,3,30000.00"}
    };

    for ( int i = 0; i < 3; i++) {
        printf("%s %d %f\n", emp[i].name,emp[i].id,emp[i].salary);
    }

    
    return 0;
}