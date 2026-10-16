#include <stdio.h>

int main(){
    int numbers[] = {10, 20, 30, 40};
    int *p = numbers;

    int count = sizeof(numbers)/sizeof(numbers[0]);

    for( int i = 0; i < count;i++){

        printf("value : %d\n", *(p + i));  // instead of p[i]
        printf("address : %p\n", (void *)(p + i));

    }

    return 0;
}