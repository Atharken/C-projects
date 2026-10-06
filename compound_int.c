#include <stdio.h>
#include <math.h>

int main(){
    float r = 0.05, a = 0.0,p = 0.0,t = 0.0,n = 1;

    printf("enter initial amount : ");
    scanf("%f", &p);

    printf("enter time : ");
    scanf("%f", &t);


    a = p * pow(1+(r/n), n * t);

    printf("your total compound interest for %f years are %f", t, a);


    return 0;
}