#include <stdio.h>

int fab(int n);

int main(){

    int f, n,i;

   

    for (i = 0; i <= 6;i++){
        printf("%d", fab(i));
    }

    

    return 0;
}


 int fab( int n){

        if (n == 0){
          return 0;
        }
        else if (n == 1){
            return 1;
        }

        return fab(n-1) + fab(n-2);
    
    }
