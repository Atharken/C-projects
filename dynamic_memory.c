#include <stdio.h>
#include <stdlib.h>

int main(){

        int n;
        int *p;
        int i;


        printf("enter your number :\n");  // adds no of integers we want to input 
        scanf("%d", &n);
        
        p = malloc(n * sizeof(int));   // allocating memory size for integer multiplied by no of integers we will input 
        if (p == NULL){
            printf("memory allocation failed\n");  
            return 1;
        }
        for(i = 0; i < n;i++){
            printf("enter your number : \n");  //taking integer input in our allocated memory block 
            scanf("%d", &p[i]);
        }

        for(i = 0;i < n;i++ ){
            printf("%d\n", *(p + i));  // *(p + i) = p[i]
        }

        printf("%d", n);

        free(p); // free memory after the use

        return 0;

}