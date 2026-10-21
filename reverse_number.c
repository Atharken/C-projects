#include <stdio.h>

int main() {
    int n = 38,reverse = 0,x;


    while (n != 0){
        x = n % 10;
        reverse = reverse * 10 + x;
        n = n/10;
    }

    printf("%d",reverse);

    return 0;
}