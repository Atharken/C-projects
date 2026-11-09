#include <stdio.h>
#include <string.h>

union employee {
    int id;
    float salary;
    char name[50];
};

int main() {
    union employee d1;

    strcpy(d1.name,"athar");

    printf("%s\n", d1.name);

    d1.salary = 70000.00;

    printf("%f\n", d1.salary);

    d1.id = 10;

    printf("%d\n", d1.id);

    return 0;

}