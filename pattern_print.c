#include <stdio.h>


int main(){
    int i,j,k;

    for (i = 1; i<=3; i++){

        for (k = 1; k<= 3 - i;k++){
            printf("  ");
        }
        for (j = 1; j <= i ; j++){
            if ((i + j)%2 == 0){
                printf("1 ");
            }
            else {
                printf("0 ");
            }

        }
        printf("\n"); 
    }
}