#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50};
    int *p = arr;
    int i,x,result = 0;

    x = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < x; i++ ) {
        result += *(p + i);
    }


    printf("%d", result);

    return 0;
    


}