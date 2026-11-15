#include <stdio.h>

struct node {
    int data;
    struct node *next;
    
};

int main() {
    struct node n1,n2;

    n1.data = 100;
    n2.data = 200;

    n1.next = &n2;
    n2.next = NULL; //this should be null cuz it's last ele of the self reffrencial struct

    printf("%d", n1.next->data);

    return 0;



    
}   