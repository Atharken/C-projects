#include <stdio.h>

struct employee {
        int id;
        char name[50];
        float salary;
};

struct employee employees[3] = {
    {10,"rahul",30000.90},
    {20,"sameer",30000.90},
    {30,"zaid",30000.90}
};

int main() {

    for ( int i = 0; i < 3; i++ ) {
        printf("%d %s %f\n", employees[i].id,employees[i].name,employees[i].salary);
    };

    return 0;
}