#include <stdio.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

void change(struct employee *s){
    s->salary = 200000.40;
}


int main() {
    struct employee s1={"athar",20,4000000.00};

    change(&s1);
    printf("%f", s1.salary);
    return 0;
}