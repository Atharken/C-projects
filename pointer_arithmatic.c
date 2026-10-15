#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6};
    int *p = &arr[0];
    printf("%d", *(p++));
    printf("%d", *p);
    return 0;

}